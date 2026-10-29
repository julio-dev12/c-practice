#!/bin/sh
# Usage: sh test_array.sh ./array_stats
PROG="$1"
[ -z "$PROG" ] && { echo "Usage: sh test_array.sh ./array_stats"; exit 1; }

pass=0; fail=0
num_after() { # $1 = label, $2 = full output: number right after the label
  printf '%s\n' "$2" | grep -ioE "$1[^0-9-]*[-]?[0-9]+\.?[0-9]*" | head -n 1 | grep -oE '[-]?[0-9]+\.?[0-9]*$'
}
within() { # $1 = got, $2 = expected
  [ -n "$1" ] && awk -v a="$1" -v b="$2" 'BEGIN { d = a - b; if (d < 0) d = -d; print (d < 0.01) ? "yes" : "no" }' || echo "no"
}
check() { # $1 = "n1 n2 n3 n4 n5", $2 = min, $3 = max, $4 = avg
  out=$(printf '%s\n' $1 | "$PROG")
  got_min=$(num_after min "$out")
  got_max=$(num_after max "$out")
  got_avg=$(num_after average "$out")
  if [ "$(within "$got_min" "$2")" = "yes" ] && [ "$(within "$got_max" "$3")" = "yes" ] && [ "$(within "$got_avg" "$4")" = "yes" ]; then
    pass=$((pass+1)); echo "PASS  [$1] -> min $2, max $3, avg $4"
  else
    fail=$((fail+1)); echo "FAIL  [$1] -> expected min $2, max $3, avg $4; got min $got_min, max $got_max, avg $got_avg"
    echo "      output was: $out"
  fi
}

check "1 2 3 4 5" 1 5 3
check "10 3 7 22 5" 3 22 9.4
check "-5 0 12 -2 8" -5 12 2.6
check "5 5 5 5 5" 5 5 5
check "100 1 50 25 75" 1 100 50.2

echo "---"
echo "$pass passed, $fail failed"
[ "$fail" -eq 0 ]

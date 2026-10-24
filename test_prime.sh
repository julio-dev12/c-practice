#!/bin/sh
# Usage: sh test_prime.sh ./PrimeNumber
PROG="$1"
[ -z "$PROG" ] && { echo "Usage: sh test_prime.sh ./PrimeNumber"; exit 1; }

pass=0; fail=0
check() {  # $1 = input, $2 = expected: prime | not
  out=$(printf '%s\n' "$1" | "$PROG")
  case "$out" in
    *"not prime"*) got=not ;;
    *prime*)       got=prime ;;
    *)             got="???";;
  esac
  if [ "$got" = "$2" ]; then
    pass=$((pass+1)); echo "PASS  $1 -> $2"
  else
    fail=$((fail+1)); echo "FAIL  $1 -> expected $2, output was: $out"
  fi
}

check 2 prime;  check 3 prime;  check 5 prime;  check 7 prime
check 11 prime; check 13 prime; check 97 prime
check 0 not;    check 1 not;    check 4 not;    check 6 not
check 8 not;    check 9 not;    check 15 not;   check 21 not
check 25 not;   check 49 not;   check 100 not;  check -7 not
check 561 not

echo "---"
echo "$pass passed, $fail failed"
[ "$fail" -eq 0 ]

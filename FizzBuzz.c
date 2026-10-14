#include <stdio.h>

int main () {
    // for loop, this loop would run until it reaches 100
    for (int i = 1; i <= 100; i++) {
      // this runs once per value of i
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}

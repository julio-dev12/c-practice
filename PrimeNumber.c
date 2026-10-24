#include <stdio.h>

int main() {
  int number;
  int isPrime = 1; // Set the flag

  printf("Enter a number: ");
  scanf("%d", &number);

  // Special case for numbers below 2
  if (number < 2) {
    printf("%d is not prime\n", number);
    return 0;
  }

  // Check if number can be divided by other than 1 and itself
  for (int i = 2; i <= number - 1; i++) {
    if (number % i == 0) {
      isPrime = 0;
      break;
    } 
  }

  // Check the flag
  if (isPrime == 0) {
    printf("%d is not prime\n", number);
  } else {
    printf("%d is prime\n", number);
  }
  return 0;
}
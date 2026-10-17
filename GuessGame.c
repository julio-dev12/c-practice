#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int guess;
  int i = 1; // to keep track to how many atemps before guessing the correct number
  srand(time(0)); // prevents from starting with the same number

  // ask for a number between 0 and 100
  printf("Guess a number from 1 to 100: ");
  scanf("%d", &guess);

  // generates a random number from 1 to 100
  int random_number = rand() % 100 + 1;
  
  while (guess != random_number) {
    if (guess > random_number) {
      printf("Too high! try again: ");
      scanf ("%d", &guess);
    } else if (guess < random_number) {
      printf("Too low! try again: ");
      scanf("%d", &guess);
    }

    i++; // increments i by 1
  }

  printf("Winner!\n");
  printf("It took you %.2d attemps", i);

  return 0;
}
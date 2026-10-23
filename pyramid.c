#include <stdio.h>

int main() {
  int height;

  // ask the user for a height
  printf("How tall you want your pyramid?");
  scanf("%d", &height);

  // prints the pyramid
  for (int i = 1; i <= height; i++) {
      for (int j = height; j >= i; j--) {
          printf(" ");
      }

      for (int x = 0; x < 2 * i - 1; x++) {
        printf("*");
      }
      
      printf("\n");
  }
}
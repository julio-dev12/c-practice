#include <stdio.h>

int main() {
  float celsius, fahrenheit;
  
  scanf("%f", &celsius);
  fahrenheit = (celsius * 9 / 5) + 32;
  printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);
  return 0;
}
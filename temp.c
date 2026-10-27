#include <stdio.h>

float celsiusToFarenheit (float celsius) {
 
  return (celsius * 9 / 5) + 32;
}

int main() {
  float celsius, fahrenheit;
  
  printf("Enter the temprature in celsius: ");
  scanf("%f", &celsius);
  
  fahrenheit = celsiusToFarenheit(celsius);


  printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);
  return 0;
}
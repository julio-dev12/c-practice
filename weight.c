#include <stdio.h>

int main()
{
  float in, lb, m, k;

  printf("Enter height in inches: ");
  scanf("%f", &in);
  printf("Enter weight in pounds: ");
  scanf("%f", &lb);
  m = in * 2.54;
  k = lb * 0.454;
  printf("Your height in cm is: %.2f and your weight in kilos is: %.2f\n", m, k);
  return 0;
}

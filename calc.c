#include <stdio.h>

int main() {
  float num1, num2;
  char op;

  printf("Enter first number: ");
  scanf ("%f", &num1);
  printf("Enter the operator: ");
  scanf(" %c", &op);
  printf("Enter second number: ");
  scanf("%f", &num2);

  switch (op) {
    case '+':
        // add
        printf("%.1f + %.1f = %.2f\n", num1, num2, num1 + num2);
        break;
    case '-':
        // subtract
        printf("%.1f - %.1f = %.2f\n", num1, num2, num1 - num2);
        break;
    case '*':
        // multiplication
        printf("%.1f x %.1f = %.2f\n", num1, num2, num1 * num2);
        break;
    case '/':
        // division
        printf("%.1f / %.1f = %.2f\n", num1, num2, num1 / num2);
        break;
    default:
        printf("Unknown operator\n");
}
  return 0;
}
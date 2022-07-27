#include <stdio.h>

float addition(float a, float b) {
  return a+b;
}

float subtraction(float a, float b) {
  return a-b;
}

float multiplication(float a, float b) {
  return a*b;
}

float division(float a, float b) {
  if(b==0) error("Division by zero!");
  return a/b;
}


int main() {
  label: printf("Enter the operation choice and the numbers:\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  int choice;
  scanf("%d", &choice);
  float num1, num2;
  scanf("%f %f\n", &num1, &num2);
  float ans;

  switch (choice) {
    case 1:
      ans = addition(num1, num2);
      break;
    case 2:
      ans = subtraction(num1, num2);
      break;
    case 3:
      ans = multiplication(num1, num2);
      break;
    case 4:
      ans = division(num1, num2);
      break;
    default:
      printf("Please enter a valid choice\n");
      goto label;
  }
  printf("The answer is: %f\n", ans);
  return 0;
}

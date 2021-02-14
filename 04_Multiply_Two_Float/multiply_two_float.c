#include <stdio.h>

int main(){
  double num1, num2, res;

  printf("Please enter two float : ");
  // Store user input
  scanf("%lf %lf", &num1, &num2);
  // Calculate user input
  res = num1 * num2;
  // Show sum value
  printf("Result is: %lf", res);
  return 0;
}
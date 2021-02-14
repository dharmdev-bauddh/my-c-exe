#include <stdio.h>

int main(int argc, char const *argv[])
{
  /* code */
  int num1, num2, num3;

  printf("Please enter two int : ");
  // Store user input
  scanf("%d %d", &num1, &num2);
  // Calculate user input
  num3 = num1 + num2;
  // Show sum value
  printf("Sum is: %d", num3);

  return 0;
}

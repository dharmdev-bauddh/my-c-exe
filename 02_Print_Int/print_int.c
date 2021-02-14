#include <stdio.h>

int main(int argc, char const *argv[])
{
  /* code */
  int num;

  printf("Please enter a int number: ");
  
  // Read and store user input
  scanf("%d", &num);

  // Show user input
  printf("Your input number is: %d", num);

  return 0;
}

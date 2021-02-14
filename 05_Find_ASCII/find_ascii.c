#include <stdio.h>

int main() {
  char ch;
  // show message to user
  printf("Please enter a character: ");
  
  // get user input
  scanf("%c", &ch);

  // Show ascii value
  printf("Your input is: %c\nASCII value is: %d\n", ch , ch);

  return 0;
}
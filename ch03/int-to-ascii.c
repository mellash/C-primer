#include <stdio.h>

int main(void) {
  short user_input;

  printf("Enter number between 0-127: ");
  scanf("%hi", &user_input);
  /*if (user_input < 0 || user_input > 127) {*/
  /*  printf("Invalid input!\n");*/
  /*  return 1;*/
  /*}*/

  printf("You entered: %c\n", user_input);

  return 0;
}

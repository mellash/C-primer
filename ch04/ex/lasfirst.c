#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char firstname[40];
  /*char *lastname = malloc(40 * sizeof(char)); // allocate 40 char*/
  char lastname[40];

  printf("Enter your first name: ");
  scanf("39%s", firstname);
  printf("Enter your last name: ");
  scanf("39%s", lastname);

  printf("%s %s\n", lastname, firstname);

  return 0;
}

#include <stdio.h>
#include <string.h>

int main(void) {

  char firstname[40];
  char lastname[40];
  int firstname_length;
  int lastname_length;

  printf("Enter your first name: ");
  scanf("%39s", firstname);
  printf("Enter your last name: ");
  scanf("%39s", lastname);
  firstname_length = strlen(firstname);
  lastname_length = strlen(lastname);

  printf("%s %s\n", firstname, lastname);
  printf("%*d %*d\n", firstname_length, firstname_length, lastname_length,
         lastname_length);
  printf("%s %s\n", firstname, lastname);
  printf("%-*d %-*d\n", firstname_length, firstname_length, lastname_length,
         lastname_length);

  return 0;
}

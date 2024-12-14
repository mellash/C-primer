#include <stdio.h>
#include <string.h>

int main(void) {

  char firstname[40];

  printf("Enter your name: ");
  scanf("%39s", firstname);

  // a. Prints it enclosed in double quotation marks
  printf("a: \"%s\"\n", firstname);

  // b. Prints it in a field 20 characters wide, with the whole field in quotes
  // and the name at the right end of the field
  printf("b: \"%20s\"\n", firstname);

  // c. Prints it at the left end of a field 20 characters wide, with the whole
  // field enclosed in quotes
  printf("c: \"%-20s\"\n", firstname);

  // d. Prints it in a field three characters wider than the name
  int length = strlen(firstname) + 3;
  printf("d: \"%-*s\"\n", length, firstname);

  return 0;
}

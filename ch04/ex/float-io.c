#include <stdio.h>

int main(void) {

  float input;

  printf("Enter deciaml number(Ex: 3.2): ");
  scanf("%f", &input);

  // Print in decimal point.
  printf("%+.3f\n", input);
  // Print in exponential notation.
  printf("%+e\n", input);

  return 0;
}

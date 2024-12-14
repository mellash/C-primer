#include <stdio.h>

int main(void) {

  char name[40];
  float height;

  printf("Enter your height(inches): ");
  scanf("%f", &height);
  printf("Enter your name: ");
  scanf("%s", name);

  printf("%s, you are %.3f feet tall\n", name, height);

  return 0;
}

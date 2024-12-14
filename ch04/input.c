#include <stdio.h>

int main(void) {

  int age;
  float assets;
  char pet[30];

  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your assets(decimal): ");
  scanf("%f", &assets);
  printf("Enter your favorite pet name: ");
  scanf("%s", pet);
  printf("%d $%.2f %s\n", age, assets, pet);

  return 0;
}

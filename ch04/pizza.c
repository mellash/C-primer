#include <stdio.h>

#define PI 3.14159

int main(void) {

  float area, circum, radius;

  printf("What is the radius of your 🍕 : ");
  scanf("%f", &radius);

  area = PI * radius * radius;
  circum = 2.0 * PI * radius;

  printf("Your basic 🍕 parameters are as follows: \n");
  printf("Circumference = %1.2f, area = %1.2f\n", circum, area);

  return 0;
}

#include <stdio.h>

#define INCH_IN_CENTI 2.54

float inch_to_centimeter(float height);

int main(void) {

  float height;

  printf("Enter your height(inches): ");
  scanf("%f", &height);

  if (height <= 0) {
    printf("Enter positive number!\n");
    return 1;
  }

  printf("Your height is %.1f Cm.\n", inch_to_centimeter(height));

  return 0;
}

float inch_to_centimeter(float height) {
  float centimeters = height * INCH_IN_CENTI;
  return centimeters;
}

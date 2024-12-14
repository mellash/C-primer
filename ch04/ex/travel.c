#include <stdio.h>

#define LITER_PER_GALLON 3.785
#define KILOMETER_PER_MILE 1.609

int main(void) {

  float mile;
  float gallon;
  float mile_per_gallon;

  float liter;
  float kilometer;
  float liter_per_100_kilometer;

  printf("Enter miles traveled: ");
  scanf("%f", &mile);
  printf("Enter gallon used: ");
  scanf("%f", &gallon);

  mile_per_gallon = mile / gallon;

  liter = gallon * LITER_PER_GALLON;
  kilometer = mile * KILOMETER_PER_MILE;
  liter_per_100_kilometer = (100 * (kilometer / liter));

  printf("MPG: %.1f\n", mile_per_gallon);
  printf("Liters per 100 kilometer: %.1f\n", liter_per_100_kilometer);

  return 0;
}

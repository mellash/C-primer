#include <stdio.h>

#define CUP_PER_PINT 0.5
#define OUNCE_PER_CUP 8
#define TABLESPOON_PER_CUP 16
#define TEASPOON_PER_CUP 48

struct POTT cup_to_POTT(float volume);

struct POTT {
  float pint;
  float ounce;
  float tablespoons;
  float teaspoons;
};

int main(void) {
  float volume;

  printf("Enter volume (in cups): ");
  scanf("%f", &volume);

  if (volume <= 0) {
    printf("Enter positive number!\n");
    return 1;
  }

  struct POTT results = cup_to_POTT(volume);

  printf("Pints: %.2f\nOunces: %.2f\nTablespoons: %.2f\nTeaspoons: %.2f\n",
         results.pint, results.ounce, results.tablespoons, results.teaspoons);

  return 0;
}

struct POTT cup_to_POTT(float volume) {
  struct POTT Pott;
  Pott.pint = volume * CUP_PER_PINT;
  Pott.ounce = volume * OUNCE_PER_CUP;
  Pott.tablespoons = volume * TABLESPOON_PER_CUP;
  Pott.teaspoons = volume * TEASPOON_PER_CUP;

  return Pott;
}

#include <stdio.h>

#define GRAMS_PER_QUART 950.0
#define AVOGADRO_NUMBER 6.022e23
#define WATER_MOLAR_MASS 18

double quart_to_molecule(double quart);
double mass_to_mole(double water_mass);

int main(void) {
  double quarts;

  printf("Enter water(quart): ");
  scanf("%lf", &quarts);

  printf("The water has %.2g molecule\n", quart_to_molecule(quarts));

  return 0;
}

double quart_to_molecule(double quart) {
  double molecule;
  double quart_water_in_gram = GRAMS_PER_QUART * quart;
  molecule = mass_to_mole(quart_water_in_gram) * AVOGADRO_NUMBER;
  return molecule;
}

double mass_to_mole(double water_mass) {
  double moles;
  moles = water_mass / WATER_MOLAR_MASS;

  return moles;
}

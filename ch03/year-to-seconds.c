#include <stdio.h>

int year_to_seconds(int year);

int main(void) {

  int input_age;

  printf("Enter your age: ");
  scanf("%i", &input_age);

  printf("You are %i seconds old.\n", year_to_seconds(input_age));

  return 0;
}

int year_to_seconds(int year) {
  int seconds;
  int one_year_second = 31560000;
  seconds = one_year_second * year;

  return seconds;
}

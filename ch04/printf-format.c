/*
 *
 *          1   2      3         4            5           6
 *       %[$][flags][width][.precision][length-modifier]conversion
 *
 * 1) $: specify argument position.
 *      -> Eg: 2$d means use the second argument.
 *
 * 2) Flags['0', '#', 'space', '-', '+']: modify output appearance.
 *      -> Eg: - for left align and + to always show sing.
 *      -> '0': for 0 padding.
 *      -> '#': for showing prefix for hexadecimal, octal and binary number
 * system.
 *      -> 'space': for showing space for positive sign if + didn't used.
 *      -> '-': left justify the output.
 *      -> '+': show positive and negative sing.
 *
 * 3) Width: minimum number of character to output.
 *      -> Eg: %10d right-aligns a number in 10 spaces.
 *
 * 4) Precision: limit decimal place for float or max string length.
 *      -> Eg: %.2f show only two decimal place.
 *
 * 5) Length-modifier: adjust the type of the argument.
 *      -> Eg: 'h' for short and 'l' for long
 *
 * 6) Conversion-specifier: determine the type of formatting
 *      -> Eg: 'f' for float, 'i' for integer and 's' for string.
 *
 *
 * */

#include <stdio.h>

int main(void) {

  int int1 = -12;
  int int2 = 232345075;
  float float1 = 1.2333333;
  float float2 = 3232415.3234;
  char *name = "Yohannes";

  printf("Argument: Float and Integer\n");
  printf("Prints: Integer and Float\n");
  printf("I:%2$i <-----> F:%1$f\n", float1, int1);

  printf("Flag:\n");
  printf("% i\n", int1);
  printf("% i\n", int2);
  printf("%010i\n", int1);
  printf("%-i\n", int1);
  printf("%-#10x\n", int1);
  printf("%#o\n", int1);
  printf("%#b\n", int1);
  printf("%#.0f\n", float1);
  printf("%.0f\n", float1);

  return 0;
}

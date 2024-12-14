#include <float.h>
#include <stdio.h>

int main(void) {

  float f_division = 1.0 / 3.0;
  double d_division = 1.0 / 3.0;

  // 4
  printf("float: %.4f\n", f_division);
  printf("double: %.4f\n", d_division);
  // 12
  printf("float: %.12f\n", f_division);
  printf("double: %.12f\n", d_division);
  // 16
  printf("float: %.16f\n", f_division);
  printf("double: %.16f\n", d_division);

  printf("---- float.h ----\n");
  printf("%d\n", FLT_DIG);
  printf("%d\n", DBL_DIG);

  return 0;
}

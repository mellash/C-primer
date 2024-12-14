#include <stdio.h>

int main(void) {

  /*
   * Example:
   *
   * The NAME family just may be $XXX.XX dollars richer!
   * One solution is:
   * printf("The %s family just may be $%.2f richer!\n",name,cash);
   *
   */
  float cash = 123.45;
  char name[40] = "Superman";

  /* The solution form the book: */
  printf("The %s family just may be $%.2f richer!\n", name, cash);
  /* My solution: */
  printf("The %s ", name);
  printf("family just may be $%3.2f richer!\n", cash);

  return 0;
}

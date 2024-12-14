#include <stdio.h>
#include <string.h>

#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void) {

  int space;

  show_n_char('*', WIDTH); // using constants as argument
  putchar('\n');

  show_n_char(SPACE, 12); // using constants as argument
  printf("%s\n", NAME);

  space = (WIDTH - strlen(ADDRESS)) /
          2; // let the program calculate how many spaces to skip
  show_n_char(SPACE, space);
  printf("%s\n", ADDRESS); // use variable as argument

  show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2); // an expression as argument
  printf("%s\n", PLACE);

  show_n_char('*', WIDTH);
  putchar('\n');

  return 0;
}

// show_n_char() defination
void show_n_char(char ch, int num) {
  int count;
  for (count = 1; count <= num; count++) {
    putchar(ch);
  }
}

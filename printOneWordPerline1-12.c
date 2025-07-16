#include <stdio.h>

#define IN  1    /* inside a word */
#define OUT 0    /* outside a word */

/*
int main() {
  int character, state;
  state = OUT;
  while ((character = getchar()) != EOF) {
    if (character == ' ' || character == '\t' || character == '\n') {
      state = OUT;
      printf("\n");
    }
    else {
      state = IN;
      putchar(character);
    }
  }
}
*/

int main() {
  int character, state;

  state = OUT;
  while ((character = getchar()) != EOF) {
    if (character == ' ' || character == '\n' || character == '\t') {
      if (state == IN) {
        putchar('\n'); 
        state = OUT;
        }
      }
      else if (state == OUT) {
        state = IN;
        putchar(character);
      }
      else {
        putchar(character);
      }
    }
  }

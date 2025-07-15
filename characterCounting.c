#include <stdio.h>

/* count characters in input */
int main() {
  long charcount;
  charcount = 0;
  while (getchar() != EOF) {
    ++charcount;
  }
  printf("%ld\n", charcount);
}

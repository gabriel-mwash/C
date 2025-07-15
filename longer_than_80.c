#include <stdio.h>
#define CUTOFF 80

char checkLine() {
  int i, c;
  for (i = 0; ((i < CUTOFF - 1) && ((c = getchar()) != EOF) && (c != '\n')); ++i) {
    continue;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
}


int main() {
  printf("%s", checkLine



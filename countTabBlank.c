#include <stdio.h>

int main() {
  int blankCount, tabCount, lineCount;
  blankCount = tabCount = 0;
  lineCount = 1;
  int string;

  while ((string = getchar()) != EOF) {
    if (string == '\t') {
      ++tabCount;
    }
    if (string == ' ') {
      ++blankCount;
    }
    if (string == '\n') {
      ++lineCount;
    }
  }
  printf("%d tabs %d blanks %d lines\n", tabCount, blankCount, lineCount);
}

#include <stdio.h>

/* count lines in input */
int main() {
  int string, lineCount;

  lineCount = 0;
  while ((string = getchar()) != EOF) {
    if (string == '\n') {
      ++lineCount;
    }
  }
  printf("%d is the number of lines\n", lineCount);
}

#include <stdio.h>

#define MAX 10000
int getNewLines(char lines[]);

int main() {
  int noLines;
  char lines[MAX];
  while ((noLines = getNewLines(lines)) > 0){
    printf("%d", lines[0]);
  }
}

int getNewLines(char lines[]) {
  int charLines, i;
  for (i = 0; (charLines = getchar()) != EOF && charLines != '\n'; ++i) {
    if (charLines == ' ' || charLines == '\t') {
      ++i;
    }
    if (charLines == '\n') {
      lines[i] = charLines;
    }
  }
  return i;
}

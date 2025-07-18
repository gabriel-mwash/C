#include <stdio.h>

#define MAXLINE 1000   /* max input line length */
#define MINLINE 80

int get80Line (char line[], int limit);


int main() {
  int len;
  char line[MAXLINE];

  while ((len = get80Line(line, MAXLINE)) > 0) {
    if (len > MINLINE) {
      printf("%s", line);
    }
  }
}

int get80Line(char line[], int lim) {
  int charLine, i;
  for (i = 0; (i < lim - 1)  &&
      ((charLine = getchar()) != EOF) && (charLine != '\n'); ++i) {
    line[i] = charLine;
  }
  if (charLine == '\n') {
    line[i] = charLine;
    ++i;
  }
  line[i] = '\0';
  return i;
}

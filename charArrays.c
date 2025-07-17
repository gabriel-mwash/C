#include <stdio.h>

#define MAXLINE 1000    /* max input line length */

int getLine(char line[], int maxline); 
void copy(char to[], char from[]);


/* print the longest input line */ 
int main() {
  int len;            /* current line length */
  int max;            /* max length seen so far */ 
  char line[MAXLINE];    /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;
  while ((len = getLine(line, MAXLINE)) > 0) {
    if (len > max) { 
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0) {          /* there was a line */
    printf("%s with %d words", longest, max);
  }
  return 0;
}

/* getline: read a line into s, return length */
int getLine(char s[], int lim) {
  int charLine, i;
  for (i = 0; i < lim - 1 && (charLine = getchar()) != EOF && charLine != '\n'; ++i) {
    s[i] = charLine;
  }
  if (charLine == '\n') {
    s[i] = charLine;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to', assume to is big enough */
void copy(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}


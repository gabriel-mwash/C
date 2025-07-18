#include <stdio.h>

#define MAXLINE 6    /* max input line length */

int getLine(char line[], int maxline); 
int getLineV2(char line[], int maxline);
void copy(char to[], char from[]);


/* print the longest input line */ 
int main() {
  int len;            /* current line length */
  int max;            /* max length seen so far */ 
  char line[MAXLINE];    /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;
  while ((len = getLineV2(line, MAXLINE)) > 0) {
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
  for (i = 0; i < lim -1 && (charLine = getchar()) != EOF && charLine != '\n'; ++i) {
    if (charLine == '\n') {
      s[i] = charLine;
//      ++i;
    }
  }
  s[i] = '\0';
  return i;
}

int getLineV2(char s[], int lim) {
  int charLine, i, j;
  j = 0;
  for (i = 0; (charLine = getchar()) != EOF && charLine != '\n'; ++i) {
    if (i < lim - 2) {
      s[j] = charLine; /* line still in boundaries */
      ++j;
    }
  }
  if (charLine == '\n') {
    s[j] = charLine;
    ++j;
    ++i;
  }
  s[j] = '\0';
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

/*
int getLongestLine() {
  int i, charLine;
  int len = 0;
  int maxlen = 0;
  while ((charLine = getchar()) != EOF ) {
    for (i = 0; charLine != '\n'; ++i) {
      len = len + 1;
    }
    if (len > maxlen) {
      putchar(charLine);
    }
  }
}

*/

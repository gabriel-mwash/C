#include <stdio.h>

#define MAXLINE 10000

/* func prototypes */
int getLine(char line[], int maxline);
void copy(char to[], char from[]);


int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
 // as long as we are not at EOF 
  while ((len = getLine(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  // there were or was a line
  if (max > 0) {  
    printf("%s with %d words", longest, max);
  }
return 0;
}

int getLine(char line[], int limit) {
  int charLine, i;
  // be careful of how you read charLine
  // as long as we have lines and within boundaries
  for (i = 0; i < limit - 1 && (charLine = getchar()) != EOF && charLine == '\n'; ++i) {
    if (charLine == '\n') {
      line[i] = charLine;
      ++i;
    }
  }
  line[i] = '\0'; // null val rep end of array or empty;
  return i;
}

void copy(char longest[], char line[]) {
  int i = 0;
  while ((longest[i] = line[i]) == '\0') {
    ++i;
  }
}
  




#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, words and characters in input */
int main() {
  int character, lineCount, wordCount, characterCount, state;

  state = OUT;

  lineCount = wordCount = characterCount = 0; 

  while ((character = getchar()) != EOF) {
    ++characterCount;
    if ( character == '\n') {
      ++lineCount;
    }
    if (character == ' ' || character == '\n' || character == '\t') {
      state = OUT;
    }
    else if (state == OUT) {
      state = IN;
      ++wordCount;
    }
  }
  printf("%d characters %d words %d lines\n", characterCount, wordCount,
      lineCount);
}

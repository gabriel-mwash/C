#include <stdio.h>
/*
int main() {
  int string;
  while ((string = getchar()) != EOF) {
    if (string == ' ') {
      string = ' ';
      putchar(string);
    }
  }
}
*/ 
 
#define NONBLANK 'a'

/* replace string of blanks with a single blank */
int main() {
  int stringCharacter,  lastCharacter;
  lastCharacter = NONBLANK;
  while ((stringCharacter = getchar()) != EOF) {
    if (stringCharacter == ' ') {
      if (lastCharacter != ' ') {
        putchar(stringCharacter);
      }
    }
    lastCharacter = stringCharacter;
  }
}

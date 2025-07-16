#include <stdio.h>

/*

int main() {
  int character;
  while ((character = getchar()) != EOF) {
    if (character == '\t') {
      character = '\\t';
    }
    if (character == ' ') {
      character = '\\b';
    }
    if (character == '\\') {
      character = '\\';
    }
  }
  putchar(character);
}

*/

int main() {
  int character;
  while ((character = getchar()) != EOF) {
    if (character == '\t') {
      printf("\\t");
    }
    if (character == '\b') {
      printf("\\b");
    }
    if (character == '\\') {
      printf("\\\\");
    }
    else {
      putchar(character);
    }
  }
}

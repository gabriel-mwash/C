#include <stdio.h>

int main() {
  int c;
  // getchar - reads next input char
  // putchar - print char when called 
  // EOF - intval 
  while((c = getchar()) != EOF) {
    putchar(c);
  }
}


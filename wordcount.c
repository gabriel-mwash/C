#include <stdio.h>

// symbolic constants
#define IN  1    /* inside a word */ 
#define OUT 0    /* outside a word */


/* count lines, words, and characters in input */  

int main() {
  int c, nl, nw, nc, state; // declare variables

  state = OUT;

  nl = nw = nc = 0; // initialize variable
  
  
  while ((c = getchar()) != EOF) { // while we have more char to count
    ++nc;
    if (c == '\n') {
      ++nl;
    }
    if ((c == ' ') || (c == '\n') || (c == '\t')) {
      state = OUT;
    }
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d lines %d words %d characters\n", nl, nw, nc);
}

  

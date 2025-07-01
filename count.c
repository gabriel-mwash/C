#include <stdio.h>

int main() {
  
  long nch;
  nch = 0;
  while (getchar() != EOF) {
    ++nch;
    printf("%ld\n", nch);
  }
  
  double nc;

  for (nc = 0; getchar() != EOF; ++nc) {
    printf("%.0f\n", nc);
  }

  // line counting

  int c, nl;
  nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++nl;
    }
  }
  printf("%d\n", nl);


  // count blanks, tabs, newlines

  int ch, nb, nt, nL;

  nb = 0;
  nt = 0;
  nL = 0;

  while ((ch = getchar()) != EOF) {
    if (ch == '\t') {
      ++nt;
    }
    if (ch == '\n') {
      ++nl;
    }
    if (ch == ' ') {
      ++nb;
    }
  }
  printf("%d tabs %d lines %d blanks", nt, nL, nb);

  
}




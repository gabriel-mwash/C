#include <stdio.h>

/* count digits, white space, others */
/*
int main()
  {
  int c, i, nwhite, nother;
  int ndigit[10];
  nwhite = nother = 0;
  for (i = 0; i < 10; ++i) {
    ndigit[i] = 0;
    printf("%d", ndigit);
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else
      ++nother;
  }

  printf("digits =");
  for (i = 0; i < 10; ++i) {
    printf(" %d", ndigit[i]);
  }

  printf(", white space = %d, other = %d\n",
  nwhite, nother);
  }
  */ 

// an array of type int that stores 5 values 

#include <stdio.h>

int main() {
  int age[5];

  printf("enter 5 input valuws: ");
  for (int i = 0; i < 5; ++i) {
    scanf("%d", &age[i]);
  }

  for (int i = 0; i < 5; ++i) {
    printf("%d ", age[i]);
  }
};





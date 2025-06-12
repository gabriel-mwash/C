#include <stdio.h>

#define LOWER 0     /* lower limit of table */
#define UPPER 300  /* upper limit */
#define STEP 20   /* step size */


int main() {
  int c;
  while (c = getchar() != EOF) {
    putchar(c);
  }
}

/* print Fahrenheit-celsius table
  for fahr = 0, 20, ...  300 */ 
/*
int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20; 

  fahr = lower;
  printf("fahrenheit to degree celsius\n");
  while ( fahr <= upper) {
    celsius = (5.0 / 9.0) * ( fahr - 32.0);
    printf("%3.0f\t %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  for ( fahr = 0; fahr <= upper; fahr = fahr + step) {
    printf("%3.0f\t %6.1f\n", fahr, (5.0 / 9.0) * ( fahr - 32));
  }


  printf("\ncelsius to fahrenheit\n");
  celsius = lower;
  while ( celsius <= upper) {
    fahr = ( celsius * (9.0 / 5.0)) + 32.0;
    printf("%3.0f\t %6.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
*/



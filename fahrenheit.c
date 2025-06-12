#include <stdio.h>

/* print Fahrenheit-celsius table
  for fahr = 0, 20, ...  300 */ 

int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;  /* lower limit of temp scale */
  upper = 300; /* upper limit */
  step = 20; /* step size */ 

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


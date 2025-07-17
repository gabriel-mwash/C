#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20
#define CONST 32


float fahrenheit_to_celsius(float fahr) {
  float celsius = (5.0 / 9.0 ) * (fahr - CONST);
  return celsius;
}

float celsius_to_fahrenheit(float celsius) {
  float fahr = (celsius * (9.0 / 5.0)) + CONST;
  return fahr;
}

int main() {
  float fahr, celsius;
  fahr = celsius = LOWER;
  printf("fahrenheit to degree celsius\n");
  while (fahr <= UPPER) {
    printf("%3.0f\t %6.0f\n", fahr, fahrenheit_to_celsius(fahr));
    fahr += STEP;
  }

  printf("celsius to fahrenheit\n");
  while ( celsius <= UPPER) {
    printf("%2.0f\t %4.0f\n", celsius ,celsius_to_fahrenheit(celsius));
    celsius += STEP;
  }
}

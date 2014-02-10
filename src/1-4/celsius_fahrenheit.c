#include "stdio.h"

int main()
{
  int upper = 100;
  float celsius = -40, fahrenheit;

  printf("Celsius Fahrenheit\n");
  while (celsius <= upper) {
    fahrenheit = ((celsius * 9.0)/5.0) + 32;
    printf("%7.0f %10.2f\n", celsius, fahrenheit);
    celsius += 1;
  }
}

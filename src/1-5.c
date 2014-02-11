#include <stdio.h>

/* print fahrenheit to celsius conversion in reverse order
 * */
int main(int argc, const char *argv[])
{
  int fahr;

  for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }

  return 0;
}

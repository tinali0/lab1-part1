#include <stdio.h>
#include <readline/readline.h>
#include<stdlib.h>
int main(void) {
  double fahrenheit;
  char *celsius= readline("Enter temperature in celsius: ");

  fahrenheit = (1.8 * atof(celsius) + 32.0);
  
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.",atof(celsius), fahrenheit);


 
  
  return 0;
}
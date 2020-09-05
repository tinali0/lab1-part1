// Author: Xiangting Li xzl5423@psu.edu
// Collaborator: Jiahui Lan jzl6335@psu.edu
// collaborator: Thomas Huggett tfh5238@psu.edu
// collaborator: Abdullahn Nadeem azn5413@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
double fahrenheit;

int main(void) { 

  char *celsius= readline("Enter temperature in celsius: ");

  fahrenheit = (1.8 * atof(celsius) + 32.0);
  
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",atof(celsius), fahrenheit);
  
  return 0;
}
#include <stdio.h>

int main(void) {
  double temp;
  printf("Enter temperature in celsius: \n");
  scanf("%lf", &temp);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit. \n", temp,temp*9/5+32);
  return 0;
}
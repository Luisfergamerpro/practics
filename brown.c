#include <stdio.h>
double square(double x)
{
  return x * x;
}
int main(void){
  double x = square(3.14);
  printf("%lf", x);

  return 0;
}

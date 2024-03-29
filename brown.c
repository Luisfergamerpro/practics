/*#include <stdio.h>
double square(double x)
{
  return x * x;
}
int main(void){
  double x = square(3.14);
  printf("%lf", x);

  return 0;
}*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
double toolarea(double radio)
{
  const double PI = 3.14159;
  double area = PI * radio * radio;
  return area; //devuelve el area calculada
}

/*void welcomeBox(char a [], int option)
{
  printf("Enter your name\n");
  scanf("%s", a);

  puts("selec a option");
  printf("\nNormal 1\tArea Calculator 2\tConvert Temperature 3\n");
  scanf("%d", &option);
}
*/
int main(){
  int mode;
  double radio;
  double x;

  float temp;
  char typeTemp;

  printf("select a mode\n");
  printf("\n1\t2\n");
  scanf("%d", &mode);

  switch(mode){
    case 1:
      printf("Enter the redius of a circle\n");
      scanf("%lf", &radio);
      x = toolarea(radio);
      printf("Area: %lf | Radio: %lf", x, radio);
      break;

    case 2:
      printf("Enter a temperature to convert (C) or (F)\n");
      scanf(" %s", &typeTemp);
      typeTemp = toupper(typeTemp);

      if(typeTemp == 'C'){
        printf("Enter a temperature in celsius\n");
        scanf("%f", &temp);
        temp = (temp * 9.0/5.0) + 32;
        printf("the temperature in Farenheit is %f\n", temp);
      }
      else if(typeTemp == 'F'){
        printf("Enter a temperature in Farenheit\n");
        scanf("%f", &temp);
        temp = (5.0/9.0) * (temp - 32);
        printf("the temperature in Celsius is %f\n", temp);
      }
      else{
        puts("this isn't a valid character");
      }
      break;

    default:
     printf("%d isn't a valid character", mode );
  }

  return EXIT_SUCCESS;
}

  



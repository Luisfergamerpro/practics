#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
int main(){
    char unit;
    float temp;
    printf("\nIs the temperature in (F) or (*C)");
    scanf("%c", &unit);

// -- argument to not disting mayus and minuscle --
    unit = toupper(unit);

// conditionals with if and else
    if(unit == 'F'){
        printf("\nEnter the temperature\n");
         scanf("%f", &temp);
         temp = (5.0/9.0) * (temp - 32);
         printf("%f", temp); 
    }
    else if(unit == 'C'){
        printf("\nEnter the temperature\n");
        scanf("%f", &temp);
        temp = (9.0/5.0 * temp) + 32;
        printf("%.1f", temp);
    }
    else{
        printf("\nThis character isn't valid\n");
    }
}
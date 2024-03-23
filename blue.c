#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    char o;
    double a;
    double b;
    double r;
    printf("\nChose an operator (+ - * /): ");
    scanf("%c", &o);

    printf("Enter the first number:\n");
    scanf("%lf", &a);

    printf("Enter the Second number:\n");
    scanf("%lf", &b);

    switch(o){
        case '+':
        r = a + b;
        printf("\nresult: %lf", r);
        break;

        case '-':
        r = a - b;
        printf("\nresult: %lf", r);
        break;

        case '*':
        r = a * b;
        printf("\nresult: %lf", r);
        break;

        case '/':
        r = a / b;
        printf("\nresult: %lf", r);
        break;

        default:
        printf("%c is not valid character", o);
    }
    return 0;
}
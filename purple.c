/*#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <ncurses.h>
#include <math.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <locale.h>
unsigned short a = 0;

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "");
    initscr();
    noecho();
    unsigned short key;
    while (!a)
    {
        clear();
        mvprintw(3, 10, "   ✄┏┓┏┳━┳┓┏┓┏━┓┏┓");
        mvprintw(4, 10, "   ✄┃┗┛┃┳┫┃┃┃┃┃┃┃┃");
        mvprintw(5, 10, "   ✄┃┏┓┃┻┫┗┫┗┫┃┃┃┃");
        mvprintw(6, 10, "   ✄┗┛┗┻━┻━┻━┻━┛┣┫");
        refresh();
        key = getch();
        
    }

    return EXIT_SUCCESS;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <ncurses.h>
#include <math.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <locale.h>
char o;
double a;
double b;
double r;

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "");
    initscr();
    noecho();
    int key;
    while (true)
    {
        clear();
        mvprintw(3, 10, "   ✄┏┓┏┳━┳┓┏┓┏━┓┏┓");
        mvprintw(4, 10, "   ✄┃┗┛┃┳┫┃┃┃┃┃┃┃┃");
        mvprintw(5, 10, "   ✄┃┏┓┃┻┫┗┫┗┫┃┃┃┃");
        mvprintw(6, 10, "   ✄┗┛┗┻━┻━┻━┻━┛┣┫");
        refresh();
        key = getch();
        if (key == 27) // 27 es el código ASCII para la tecla Escape
        {
            break; // Salir del bucle
        }
    }
    endwin(); // Finalizar el modo ncurses

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
    return EXIT_SUCCESS;
}

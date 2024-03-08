/*#include <stdio.h>
#include <stdlib.h>
int main(){
    int x, y;
    int operation;
    float c;
    int cl;
    printf("Suma\tResta\tMultiplicacion\tDivision\n");
    printf("1\t2\t3\t\t4\n");
    printf("\n");

    scanf("%d", &operation);
    system("clear");

    while((cl = getchar()) != EOF){
    if(operation == 1){
        scanf("%d%d", &x, &y);
        c = x + y;
        printf("%f", c);
    }
    else if(operation == 2){
        scanf("%d%d", &x, &y);
        c = x - y;
        printf("%f", c);

    }
    else if(operation == 3){
        scanf("%d%d", &x, &y);
        c = x * y;
        printf("%f", c);
    }
    else if(operation == 4){
        scanf("%d%d", &x, &y);
        c = x / y;
        printf("%f", c);

    }

  }
}*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    /*float item1 = 5.18;
    float item2 = 812.90;
    float item3 = 12.172;
    printf("item 1: $%.2f\nitem 2: $%.3f\nitem 3: $%.3f\n", item1, item2, item3);
    return 0;*/

    //constant value: if I wanna that this value's var don't change
    const float PI = 3.1416;

    /*operators*/
    // +
    // -
    // *
    // /
    // %
    // --
    // ++
    // ==
    
    //int x = 2;
    //int z = 5;
    //float c;
    //c = x / (float)z;
    //printf("Resultado: %.3f", c);
    int x;
    x = x + 2;
    x += 2;
    x = getchar();
    system("clear");
    putchar(x);
    putchar('\n');


}
#include <stdio.h>

int main()
{
    int nunber;
    scanf("%d",&nunber);
    if (nunber > 0){
        printf("numero positivo\n");
    }
    else if (nunber == 0){
        printf("o numero e igual a zero\n");
    }
    else{
        printf("o numero e negativo\n");
    }
    return 0;
}

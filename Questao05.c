#include <stdio.h>

int main()
{
    int nunber1 , nunber2;
    scanf("%d%d",&nunber1,&nunber2);
    if (nunber1 > nunber2){
        printf("numero 1 e o maior\n");
    }
    else if (nunber1 == nunber2){
        printf("os numeros são iguais");
    } 
    else{
        printf("numero 2 e o maior\n");
    }
    return 0;
    
}

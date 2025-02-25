#include <stdio.h>
#include <math.h>
int main(){

    float produto,total;
    printf("Digite o Valor do Produto: ");
    scanf("%f",&produto);
    if( produto <= 20 ){
        total = produto + (produto* 0.45);
        printf(" O valor para a venda é de:%.2f",total);
    }
    else{
        total = produto + (produto* 0.3);
        printf(" O valor para a venda é de:%.2f",total);
    }
 return 0;
}
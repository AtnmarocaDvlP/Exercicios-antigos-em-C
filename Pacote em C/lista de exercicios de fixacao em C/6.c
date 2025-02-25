#include <stdio.h>
int main(){
    float code,qprdo,total;
    printf("Digite o codigo do produto: ");
    scanf("%f",&code);
    printf("indique quantos produtos foram comprados: ");
    scanf("%f",&qprdo);
    if(code >= 1 && code <= 10){
        total = 10 * qprdo;
        printf("O total sem desconto é de:%.2f",total);
    }
    else if(code >= 11 && code <= 20){
        total = 15 * qprdo;
        printf("O total sem desconto é de:%.2f",total);
    }
    else if(code >= 21 && code <= 30){
        total = 20 * qprdo;
        printf("O total sem desconto é de:%.2f",total);
    }
    else if(code >= 31 && code <= 40){
        total = 30 * qprdo;
        printf("O total sem desconto é de:%.2f",total);
    }
    else{
        printf("Comando invalido!");
    }
    if( total <= 250){
            printf("\nO Valor A ser Pago é de:%.2f",total-(total*0.05));
    }
    else if( total >= 251 && total <= 500){
            printf("\nO Valor A ser Pago é de:%.2f",total-(total*0.1));
    }
    else if( total >= 501){
            printf("\nO Valor A ser Pago é de:%.2f",total-(total*0.15));
    }
    
}
#include <stdio.h>
int main(){
    float salario,psalario,emp,qemp,vempr,total;
    printf("Digite o valor do Salario: ");
    scanf("%f", &salario);
    printf("Digite o valor do emprestimo: ");
    scanf("%f", &emp);
    printf("Digite a quantidade de prestações será usados na cobrança: ");
    scanf("%f",&qemp);
    psalario = salario*0.3;
    vempr = emp/qemp;
    if( psalario >= vempr){
        printf(" Voce poderá fazer o emprestimo!");
        printf("\n O valor das prestações será de:%.2f",vempr);
    }
    else if( psalario < vempr){
        printf("Voce nao pode fazer o emprestimo!");
        printf("\n pois o valor da prestação é de %.2f",vempr);
        printf("\n e (30) do seu salario corresponde a %.2f",psalario);
    }
    return 0;
}
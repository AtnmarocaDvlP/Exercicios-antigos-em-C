#include <stdio.h>
int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("\n%d é um numero par.", numero);
    } 
    else{
        printf("\n%d é um numero impar", numero);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int numero1, numero2, numero3;

    printf("Digite três números: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    if (numero1 > numero2) {
        numero1 = numero1 + numero2;
        numero2 = numero1 - numero2;
        numero1 = numero1 - numero2;
    }
    if (numero2 > numero3) {
        numero2 = numero2 + numero3;
        numero3 = numero2 - numero3;
        numero2 = numero2 - numero3;
    }
    if (numero1 > numero2) {
        numero1 = numero1 + numero2;
        numero2 = numero1 - numero2;
        numero1 = numero1 - numero2;
    }

    printf("\nNúmeros em ordem sequencial: %d %d %d", numero1, numero2, numero3);

    return 0;
}
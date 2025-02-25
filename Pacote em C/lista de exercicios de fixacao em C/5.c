#include <stdio.h>

int main() {
    int A, B, C;
    printf("Digite os valores de A, B e C: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A < B + C) {
        if (B < A + C) {
            if (C < A + B) {
                if (A == B && B == C) {
                    printf("Triângulo Equilátero\n");
                } else if (A == B || A == C || B == C) {
                    printf("Triângulo Isósceles\n");
                } else {
                    printf("Triângulo Escaleno\n");
                }
            } else {
                printf("Estes valores não formam um triângulo!\n");
            }
        } else {
            printf("Estes valores não formam um triângulo!\n");
        }
    } else {
        printf("Estes valores não formam um triângulo!\n");
    }

    return 0;
}
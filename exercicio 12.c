#include <stdio.h>

int main() {
    int A, B, C;
    printf("Digite tres numeros inteiros e positivos (A, B, C): \n ");
    scanf("%d %d %d", &A, &B, &C);

    // Calcula R e S
    int R = (A + B) * (A + B);
    int S = (B + C) * (B + C);

    // Calcula D
    float D = R + (float)S / 2;

    printf("O resultado da expressao D = R + S / 2 e: %.2f\n", D);

    return 0;
}


#include <stdio.h>

// Fun��o para encontrar o maior valor no vetor
int encontrarMaior(int vetor[], int tamanho, int i) {
    int maior = vetor[0];
    for (i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

// Fun��o para encontrar o menor valor no vetor
int encontrarMenor(int vetor[], int tamanho, int i) {
    menor = vetor[0];
    for (i = 1; i < tamanho; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    return menor;
}

int main() {
    int vetor[10];
       int i;
    // L� os valores do vetor
    printf("Digite 10 n�meros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chama as fun��es para encontrar o maior e o menor valor
    int maiorValor = encontrarMaior(vetor, 10);
    int menorValor = encontrarMenor(vetor, 10);

    // Exibe os resultados
    printf("O maior valor no vetor �: %d\n", maiorValor);
    printf("O menor valor no vetor �: %d\n", menorValor);

    return 0;
}


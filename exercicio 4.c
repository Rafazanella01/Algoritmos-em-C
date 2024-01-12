#include <stdio.h>

int main() {
    int A, B, temp;
    
    // Recebendo os valores de entrada
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    // Trocando os valores usando uma variável temporária
    temp = A;
    A = B;
    B = temp;
    
    // Exibindo os valores trocados
    printf("Apos a troca, o valor de A e: %d\n", A);
    printf("Apos a troca, o valor de B e: %d\n", B);
    
    return 0;
}


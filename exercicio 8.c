#include <stdio.h>

void main() {
    int num1, num2;
    
    // Leitura dos valores
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &num2);
    
    // Cálculo dos resultados
    int somaQuadrados = (num1 * num1) + (num2 * num2);
    float divisao = (float) num1 / num2;
    
    // Exibição dos resultados
    printf("A soma dos quadrados dos numeros e: %d\n", somaQuadrados);
    printf("A divisao dos numeros e: %.2f\n", divisao);
    
    return 0;
}

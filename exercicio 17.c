#include <stdio.h>

int main() {
    float precoAntesDesconto, novoPreco;
    float desconto = 0.15; // 15% de desconto

    printf("Digite o preco do brinquedo antes do desconto: ");
    scanf("%f", &precoAntesDesconto);

    novoPreco = precoAntesDesconto * (1 - desconto);

    printf("O novo preco do brinquedo apos o desconto e: %.2f\n", novoPreco);

    return 0;
}

	


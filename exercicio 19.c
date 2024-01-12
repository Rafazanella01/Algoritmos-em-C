#include <stdio.h>

int main() {
    float custoFabrica, valorDistribuidor, valorImpostos;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

    printf("Digite o valor do distribuidor: ");
    scanf("%f", &valorDistribuidor);

    printf("Digite o valor dos impostos: ");
    scanf("%f", &valorImpostos);

    float custoConsumidor = custoFabrica + valorDistribuidor + valorImpostos;

    printf("O valor a ser pago pelo automovel e: %.2f\n", custoConsumidor);

    return 0;
}


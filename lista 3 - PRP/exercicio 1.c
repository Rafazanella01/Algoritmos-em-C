#include <stdio.h>

int main() {
    // Definir o número máximo de clientes
    int numClientes = 15;

    // Declaração dos vetores para armazenar os dados dos clientes
    int codigos[numClientes], i;
    float comprasAnoPassado[numClientes];
    float bonus[numClientes];

    // Entrada de dados para cada cliente
    for ( i = 0; i < numClientes; i++) {
        printf("Digite o codigo do cliente %d: ", i + 1);
        scanf("%d", &codigos[i]);
        
        printf("Digite o valor das compras do cliente %d no ano passado: R$ ", i + 1);
        scanf("%f", &comprasAnoPassado[i]);

        // Calcular o bônus de acordo com o valor das compras
        if (comprasAnoPassado[i] < 1000.0) {
            bonus[i] = comprasAnoPassado[i] * 0.10;
        } else {
            bonus[i] = comprasAnoPassado[i] * 0.15;
        }
    }

    // Exibição dos bônus para cada cliente
    printf("\nBonus dos clientes:\n");
    for (i = 0; i < numClientes; i++) {
        printf("Cliente %d (Codigo %d): R$ %.2f\n", i + 1, codigos[i], bonus[i]);
    }

    return 0;
}


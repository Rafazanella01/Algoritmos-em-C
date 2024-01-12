#include <stdio.h>

int main() {
    int valor, soma_10_20 = 0, soma_1_10 = 0, menor_valor, total_numeros = 0;

    menor_valor = 0; 

    printf("Digite um numero (0 para sair): ");
    scanf("%d", &valor);

    while (valor != 0) {
        if (menor_valor == 0 || valor < menor_valor) {
            menor_valor = valor;
        }

        if (valor >= 10 && valor <= 20) {
            soma_10_20 += valor;
        }

        if (valor >= 1 && valor <= 10) {
            soma_1_10 += valor;
            total_numeros++;
        }

        printf("Digite um numero (0 para sair): ");
        scanf("%d", &valor);
    }

    double media_1_10 = total_numeros > 0 ? (double)soma_1_10 / total_numeros : 0;

    printf("Soma dos numeros no intervalo 10 a 20: %d\n", soma_10_20);
    printf("Media dos numeros no intervalo 1 a 10: %.2f\n", media_1_10);
    printf("Menor valor lido: %d\n", menor_valor);

    return 0;
}


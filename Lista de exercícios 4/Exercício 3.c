#include <stdio.h>

int main() {
    int numero, soma = 0;

    while (soma < 50) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Numero negativo não e permitido. Digite novamente.\n");
        }

        soma += numero;
    }

    printf("A soma dos numeros atingiu ou ultrapassou 50.\n");
    printf("Soma final: %d\n", soma);

    return 0;
}


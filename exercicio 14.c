#include <stdio.h>

int main() {
    int numero;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    int antecessor = numero - 1;
    int sucessor = numero + 1;

    printf("O antecessor de %d e: %d\n", numero, antecessor);
    printf("O sucessor de %d e: %d\n", numero, sucessor);

    return 0;
}


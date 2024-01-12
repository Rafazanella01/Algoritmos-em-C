#include <stdio.h>

int main() {
    int anos, meses, dias;

    printf("Digite a idade da pessoa em anos, meses e dias (ex: 25 6 15): ");
    scanf("%d %d %d", &anos, &meses, &dias);

    // Calcula a idade em dias
    int idadeEmDias = anos * 365 + meses * 30 + dias;

    printf("A idade da pessoa em dias e: %d\n", idadeEmDias);

    return 0;
}


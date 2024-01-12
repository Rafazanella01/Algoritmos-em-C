#include <stdio.h>
#include <math.h>

void main() {
    float x, y;

    printf("Digite o valor de X: ");
    scanf("%f", &x);

    if (x == 0) {
        printf("Nao e possivel calcular a funçao para X igual a 0.\n");
    } else {
        y = pow((5 * x + 2), 2) / (x * x);

        printf("Para X = %.2f, Y = %.2f\n", x, y);
    }

    return 0;
}


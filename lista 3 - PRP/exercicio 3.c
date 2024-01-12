#include <stdio.h>

int main() {
    int i;
    double H;

    for (i = 1; i <= 50; i++) {
        H += (2 * i - 1) / (double)i; // Adiciona cada termo à soma
    }

    printf("O valor de H e: %.2lf\n", H);
}


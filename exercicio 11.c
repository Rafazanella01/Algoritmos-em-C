#include <stdio.h>

int main() {
    // Declara��o das vari�veis para armazenar as coordenadas dos pontos
    double x1, y1, x2, y2;

    // Solicita ao usu�rio que insira as coordenadas do primeiro ponto
    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    // Solicita ao usu�rio que insira as coordenadas do segundo ponto
    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calcula a dist�ncia ao quadrado entre os dois pontos usando a f�rmula
    double distancia_quadrado = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

    // Exibe a dist�ncia calculada (n�o � a dist�ncia real, � o quadrado da dist�ncia)
    printf("A distancia ao quadrado entre os pontos P1(%.2lf, %.2lf) e P2(%.2lf, %.2lf) e: %.2lf\n", x1, y1, x2, y2, distancia_quadrado);

    return 0;
}


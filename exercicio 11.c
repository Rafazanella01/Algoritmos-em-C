#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar as coordenadas dos pontos
    double x1, y1, x2, y2;

    // Solicita ao usuário que insira as coordenadas do primeiro ponto
    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    // Solicita ao usuário que insira as coordenadas do segundo ponto
    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calcula a distância ao quadrado entre os dois pontos usando a fórmula
    double distancia_quadrado = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

    // Exibe a distância calculada (não é a distância real, é o quadrado da distância)
    printf("A distancia ao quadrado entre os pontos P1(%.2lf, %.2lf) e P2(%.2lf, %.2lf) e: %.2lf\n", x1, y1, x2, y2, distancia_quadrado);

    return 0;
}


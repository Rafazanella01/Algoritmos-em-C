#include <stdio.h>
#include <math.h>

int main() {
    double raio_maior, raio_menor, area_maior, area_menor, area_hachurada, percentagem;

    // Recebendo o raio do c�rculo maior
    printf("Digite o raio do circulo maior: ");
    scanf("%lf", &raio_maior);

    // Calculando o raio do c�rculo menor
    raio_menor = raio_maior / 2.0;

    // Calculando as �reas dos c�rculos
    area_maior = M_PI * pow(raio_maior, 2);
    area_menor = M_PI * pow(raio_menor, 2);

    // Calculando a �rea hachurada
    area_hachurada = area_maior - area_menor;

    // Calculando a percentagem da �rea do c�rculo menor sobre a �rea do c�rculo maior
    percentagem = (area_menor / area_maior) * 100;

    // Exibindo os resultados
    printf("A area da figura hachurada e: %.2lf\n", area_hachurada);
    printf("A percentagem da area do circulo menor sobre a area do circulo maior e: %.2lf%%\n", percentagem);

    return 0;
}


#include <stdio.h>
#include <math.h>

int main() {
    double X, Y, Z;
    
    // Recebendo os valores de entrada
    printf("Digite o valor de X: ");
    scanf("%lf", &X);
    
    printf("Digite o valor de Y: ");
    scanf("%lf", &Y);
    
    printf("Digite o valor de Z: ");
    scanf("%lf", &Z);
    
    // Calculando e exibindo os resultados
    double area_triangulo = 0.5 * X * Y;
    printf("A area do triangulo e: %.2lf\n", area_triangulo);
    
    double comprimento_circunferencia = 2 * M_PI * Z;
    printf("O comprimento da circunferencia e: %.2lf\n", comprimento_circunferencia);
    
    double area_trapezio = 0.5 * (X + Z) * Y;
    printf("A area do trapezio e: %.2lf\n", area_trapezio);
    
    double area_retangulo = Y * Z;
    printf("A area do retangulo e: %.2lf\n", area_retangulo);
    
    double area_cubo = 6 * X * X;
    printf("A area da superficie do cubo e: %.2lf\n", area_cubo);
    
    return 0;
}

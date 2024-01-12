#include <stdio.h>

int main() {
    float comprimento, largura, altura;
    
    printf("Digite o comprimento do banheiro em metros: ");
    scanf("%f", &comprimento);
    
    printf("Digite a largura do banheiro em metros: ");
    scanf("%f", &largura);
    
    printf("Digite a altura do banheiro em metros: ");
    scanf("%f", &altura);
    
    // Calcula a área total das paredes
    float areaTotal = 2 * altura * (comprimento + largura);
    
    printf("A area total das paredes a ser revestida e de %.2f metros quadrados.\n", areaTotal);
    
    return 0;
}


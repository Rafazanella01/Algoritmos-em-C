#include <stdio.h>

int main() {
    
    int cpf, dependentes;
    float rendaMensal, salarioMinimoAtual, descontoPorDependente, impostoDeRenda;

    
    printf("Informe o valor atual do salario minimo: ");
    scanf("%f", &salarioMinimoAtual);

    
    while (1) {
    
        printf("\nInforme o CPF (ou zero para encerrar): ");
        scanf("%d", &cpf);

        
        if (cpf == 0) {
            break;
        }

        printf("Informe o numero de dependentes: ");
        scanf("%d", &dependentes);

        printf("Informe a renda mensal: ");
        scanf("%f", &rendaMensal);

        
        descontoPorDependente = 0.05 * salarioMinimoAtual;

        
        if (rendaMensal <= 2 * salarioMinimoAtual) {
            impostoDeRenda = 0; // isento
        } else if (rendaMensal <= 3 * salarioMinimoAtual) {
            impostoDeRenda = 0.05 * rendaMensal;
        } else if (rendaMensal <= 5 * salarioMinimoAtual) {
            impostoDeRenda = 0.1 * rendaMensal;
        } else if (rendaMensal <= 7 * salarioMinimoAtual) {
            impostoDeRenda = 0.15 * rendaMensal;
        } else {
            impostoDeRenda = 0.2 * rendaMensal;
        }

    
      impostoDeRenda -= dependentes * descontoPorDependente;

         // Garantindo que o imposto de renda não seja negativo
        if (impostoDeRenda < 0) {
           impostoDeRenda = 0;
       }

        
        printf("CPF: %d\nImposto de Renda a ser pago: %.2f\n", cpf, impostoDeRenda);
    }

    return 0;
}


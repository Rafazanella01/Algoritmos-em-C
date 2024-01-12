#include <stdio.h>

int main() {
    int publicoPossivel, publicoArquibancada, publicoCadeiras;
    float valorArquibancada = 8.0;
    float valorCadeiras = 12.0;

    printf("Digite o publico possivel no estadio: ");
    scanf("%d", &publicoPossivel);

    printf("Digite o publico nas arquibancadas: ");
    scanf("%d", &publicoArquibancada);

    printf("Digite o publico nas cadeiras: ");
    scanf("%d", &publicoCadeiras);

    float rendaArquibancada = publicoArquibancada * valorArquibancada;
    float rendaCadeiras = publicoCadeiras * valorCadeiras;
    float rendaTotal = rendaArquibancada + rendaCadeiras;

    float percentualPresente = ((float)(publicoArquibancada + publicoCadeiras) / publicoPossivel) * 100;

    printf("Renda do jogo: R$%.2f\n", rendaTotal);
    printf("Percentual de publico presente: %.2f%%\n", percentualPresente);

    return 0;
}


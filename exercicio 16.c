#include <stdio.h>

int main() {
    int totalVotantes, votosBrancos, votosNulos, votosValidos;

    printf("Digite o numero total de votantes: ");
    scanf("%d", &totalVotantes);

    printf("Digite o numero de votos brancos: ");
    scanf("%d", &votosBrancos);

    printf("Digite o numero de votos nulos: ");
    scanf("%d", &votosNulos);

    printf("Digite o numero de votos validos: ");
    scanf("%d", &votosValidos);

    float percentualBrancos = (float)votosBrancos / totalVotantes * 100;
    float percentualNulos = (float)votosNulos / totalVotantes * 100;
    float percentualValidos = (float)votosValidos / totalVotantes * 100;

    printf("Percentual de votos brancos: %.2f%%\n", percentualBrancos);
    printf("Percentual de votos nulos: %.2f%%\n", percentualNulos);
    printf("Percentual de votos validos: %.2f%%\n", percentualValidos);

    return 0;
}


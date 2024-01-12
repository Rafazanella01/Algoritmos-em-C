#include <stdio.h>

int main() {
    int times = 4;
    int jogadores_por_time = 11;
    int idade[4][11], i, j;
    float peso[4][11];
    float altura[4][11];
    int jogadores_menor_18 = 0;
    float media_idades[4] = {0};
    float media_alturas = 0;

    // Preencha os vetores com os dados dos jogadores
    for ( i = 0; i < times; i++) {
        for ( j = 0; j < jogadores_por_time; j++) {
            printf("Digite a idade do jogador %d do time %d: ", j + 1, i + 1);
            scanf("%d", &idade[i][j]);
            printf("Digite o peso do jogador %d do time %d (em quilos): ", j + 1, i + 1);
            scanf("%f", &peso[i][j]);
            printf("Digite a altura do jogador %d do time %d (em metros): ", j + 1, i + 1);
            scanf("%f", &altura[i][j]);
				printf("\n");
            // Calcule a média de idade para o time
            media_idades[i] += idade[i][j];

            // Verifique se o jogador tem menos de 18 anos
            if (idade[i][j] < 18) {
                jogadores_menor_18++;
            }

            // Some a altura do jogador à média de alturas do campeonato
            media_alturas += altura[i][j];
        }
        // Calcule a média de idade para o time
        media_idades[i] /= jogadores_por_time;
    }

    // Calcule a média de alturas do campeonato
    media_alturas /= (times * jogadores_por_time);

    // Exiba os resultados
    printf("Quantidade de jogadores com idade inferior a 18 anos: %d\n", jogadores_menor_18);

    for ( i = 0; i < times; i++) {
        printf("Media de idade do time %d: %.2f anos\n", i + 1, media_idades[i]);
    }

    printf("Media de alturas de todos os jogadores do campeonato: %.2f metros\n", media_alturas);

    return 0;
}


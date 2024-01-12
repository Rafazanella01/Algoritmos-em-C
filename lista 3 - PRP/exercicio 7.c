#include <stdio.h>

int main() {
    int n = 15, i;
    float altura, maior_altura, menor_altura, media_altura_mulheres ;
    int num_homens = 0;
    int sexo, sexo_pessoa_mais_alta;

    for (i = 0; i < n; i++) {
        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &altura);

        printf("Digite o sexo da pessoa %d (1 para Feminino, 2 para Masculino): ", i + 1);
        scanf("%d", &sexo);
			printf("\n");
        if (altura > maior_altura) {
            maior_altura = altura;
            sexo_pessoa_mais_alta = sexo;
        }
        if (altura < menor_altura) {
            menor_altura = altura;
        }

        if (sexo == 'M') {
            media_altura_mulheres += altura;
        } else if (sexo == 'F') {
            num_homens++;
        }
    }

    if (media_altura_mulheres > 0) {
        media_altura_mulheres /= n - num_homens;
    }

    printf("Maior altura do grupo: %.2f metros\n", maior_altura);
    printf("Menor altura do grupo: %.2f metros\n", menor_altura);
    printf("Media de altura das mulheres: %.2f metros\n", media_altura_mulheres);
    printf("Numero de homens: %d\n", num_homens);
    printf("Sexo da pessoa mais alta (1 para Feminino, 2 para Masculino): %d\n", sexo_pessoa_mais_alta);

    return 0;
}


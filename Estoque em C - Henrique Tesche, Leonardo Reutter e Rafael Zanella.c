#include <stdio.h>
#include <string.h>


// Struct Produto:
// Define uma estrutura chamada Produto que cont�m o nome do produto (como uma string de at� 50 caracteres) e a quantidade dispon�vel desse produto (como um n�mero inteiro).
typedef struct{
    char nome[50];
    int quantidade;
     float preco;
}Produto;


// Fun��o exibirInfoPrograma():
//Exibe informa��es sobre o programa, como o t�tulo, os desenvolvedores e a data de desenvolvimento.
void exibirInfoPrograma() {
    printf("\nPrograma de Gerenciamento de Estoque\n");
    printf("Desenvolvido por: Henrique Tesche, Leonardo Reuter e Rafael Zanella \n");
    printf("Data de Desenvolvimento: 01/12/23 \n");
}

// CALCULA A SOMA TOTAL DOS PRODUTOS
float calcularTotal(Produto produto) {
    return produto.quantidade * produto.preco;
}

//Fun��o exibirDadosCadastrados():
//Exibe os dados cadastrados no estoque, incluindo o nome do produto e a quantidade dispon�vel.
void exibirDadosCadastrados(Produto estoque[], int numProdutos) {
    int i;
    if (numProdutos > 0) {
        printf("\nDados Cadastrados:\n");
        printf("%-30s %-10s %-10s %-10s\n", "Nome do Produto", "Quantidade", "Preco", "Total Produto");
        float totalGeral = 0.0;

        for (i = 0; i < numProdutos; i++) {
            float totalProduto = calcularTotal(estoque[i]);
            totalGeral += totalProduto;

            printf("%-30s %-10d %-10.2f %-10.2f\n", estoque[i].nome, estoque[i].quantidade, estoque[i].preco, totalProduto);
        }

        printf("\nTotal Geral: %.2f\n", totalGeral);
    } else {
        printf("Nao ha dados cadastrados.\n");
    }
}



//Fun��o adicionarProduto():
//Permite ao usu�rio adicionar um novo produto ao estoque, solicitando o nome do produto e a quantidade dispon�vel.
void adicionarProduto(Produto estoque[], int *numProdutos) {
    if (*numProdutos < 100) {
        printf("Digite o nome do produto: ");
        scanf("%s", estoque[*numProdutos].nome);

        printf("Digite a quantidade disponivel: ");
        scanf("%d", &estoque[*numProdutos].quantidade);

        printf("Digite o preco do produto: ");
        scanf("%f", &estoque[*numProdutos].preco);

        (*numProdutos)++;
        printf("Produto adicionado com sucesso!\n");
    } else {
        printf("Erro: O estoque esta cheio.\n");
    }
}

//Fun��o visualizarEstoque():
//Exibe uma listagem do estoque atual, incluindo o nome do produto e a quantidade dispon�vel.
void visualizarEstoque(Produto estoque[], int numProdutos) {
    int i;
    if (numProdutos > 0) {
        printf("\nEstoque:\n");
        printf("%-30s %-10s %-10s\n", "Nome do Produto", "Quantidade", "Preco");
        for (i = 0; i < numProdutos; i++) {
            printf("%-30s %-10d %-10.2f\n", estoque[i].nome, estoque[i].quantidade, estoque[i].preco);
        }
    } else {
        printf("O estoque esta vazio.\n");
    }
}

//Fun��o atualizarEstoque():
//Permite ao usu�rio atualizar a quantidade dispon�vel de um produto existente no estoque, solicitando o nome do produto e a nova quantidade.
void atualizarEstoque( Produto estoque[], int numProdutos) {
    char nomeProduto[50];
    float novoPreco = 0.0;
    int novaQuantidade = 0;

    printf("Digite o nome do produto que deseja atualizar: ");
    scanf("%s", nomeProduto);

    int i;
    for (i = 0; i < numProdutos; i++) {
        if (strcasecmp(estoque[i].nome, nomeProduto) == 0) {
            printf("Digite o novo preco do produto: ");
            scanf("%f", &novoPreco);

            printf("Digite a nova quantidade disponivel: ");
            scanf("%d", &novaQuantidade);

            estoque[i].preco = novoPreco;
            estoque[i].quantidade = novaQuantidade;

            printf("Preco e quantidade atualizados com sucesso!\n");
            return;
        }
    }

    printf("Produto nao encontrado no estoque.\n");
}


// Fun��o excluirProduto():
// Permite ao usu�rio excluir um produto do estoque com base no nome fornecido.
void excluirProduto(Produto estoque[], int *numProdutos) {
    char nomeProduto[50];
	int i, j;
    printf("Digite o nome do produto que deseja excluir: ");
    scanf("%s", nomeProduto);

    for (i = 0; i <*numProdutos; i++) {
        if (strcasecmp(estoque[i].nome, nomeProduto) == 0 ) {
            
            for (j = i; j < *numProdutos - 1; j++) {
                strcpy(estoque[j].nome, estoque[j + 1].nome);
                estoque[j].quantidade = estoque[j + 1].quantidade;
            }
            (*numProdutos)--;
            printf("Produto excluido com sucesso!\n");
            return;
        }
    }

    printf("Produto nao encontrado no estoque.\n");
}



//Fun��o  mainMenu()
//Exibe o menu principal do programa com op��es numeradas.
void mainMenu() {
    printf("\nMenu:\n");
    printf("1. Adicionar Produto\n");
    printf("2. Visualizar Estoque\n");
    printf("3. Excluir Registro\n");
    printf("4. Atualizar Estoque\n");
    printf("5. Exibir Informacoes sobre o Programa\n");
    printf("6. Exibir Dados Cadastrados\n");
    printf("7. Sair\n");
}


//Fun��o main():
/*
1. Inicializa um array(vetor) de Produto chamado estoque e uma vari�vel numProdutos para rastrear o n�mero atual de produtos no estoque.

2. Usa um loop do-while para exibir o menu e executar as opera��es com base na escolha do usu�rio.

3. O loop continua at� que o usu�rio escolha a op��o 7 (Sair).

4. Cada op��o do menu � implementada atrav�s de um switch que chama a fun��o correspondente.
*/
int main() {
    Produto estoque[100];
    int numProdutos = 0;
    int opcao;

    do {
        mainMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        system("cls");
        switch (opcao) {
            case 1:
                adicionarProduto(estoque, &numProdutos);
                break;
            case 2:
                visualizarEstoque(estoque, numProdutos);  
                break;
			case 3:
                excluirProduto(estoque, &numProdutos);
                break;    
            case 4:
                atualizarEstoque(estoque, numProdutos);
                break;
            case 5:
                exibirInfoPrograma();
                break;
            case 6:
                exibirDadosCadastrados(estoque, numProdutos);
                break;
            case 7 :
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 7);

    return 0;
}

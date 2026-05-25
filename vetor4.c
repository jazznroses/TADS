#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 10

void consultarProduto(char produto[MAX_PRODUTOS][50], int quantidade[MAX_PRODUTOS]);
void retirarProduto(char produto[MAX_PRODUTOS][50], int quantidade[MAX_PRODUTOS]);
void listarProdutos(char produto[MAX_PRODUTOS][50], int quantidade[MAX_PRODUTOS]);
void cadastrarProdutos(char produto[MAX_PRODUTOS][50], int quantidade[MAX_PRODUTOS]);

int main() {
    char produto[MAX_PRODUTOS][50] = {0}; 
    int quantidade[MAX_PRODUTOS] = {0};
    int opcao;

    do {
        printf("\nMENU\n");
        printf("1 - Consultar produto\n");
        printf("2 - Retirar produto\n");
        printf("3 - Listar produtos\n");
        printf("4 - Cadastrar produtos\n");
        printf("0 - Sair \n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                consultarProduto(produto, quantidade);
                break;
            case 2:
                retirarProduto(produto, quantidade);
                break;
            case 3:
                listarProdutos(produto, quantidade);
                break;
            case 4:
                cadastrarProdutos(produto, quantidade);
                break;
            case 0:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }

    } while(opcao != 0);

    return 0;
}




void consultarProduto(char produto[MAX_PRODUTOS][50], int quantidade[MAX_PRODUTOS]) {
    char busca[50];
    int achou = 0;

    printf("Digite o nome do produto: ");
    scanf("%s", busca);

    for(int i = 0; i < MAX_PRODUTOS; i++) {
        if(strcmp(produto[i], busca) == 0) {
            printf("Produto: %s\n", produto[i]);
            printf("Quantidade: %d\n", quantidade[i]);
            achou = 1;
        }
    }

    if(achou == 0) {
        printf("Produto nao encontrado.\n");
    }
}

void retirarProduto(char produto[MAX_PRODUTOS][50], int quantidade[MAX_PRODUTOS]) {
    char busca[50];
    int remover;
    int achou = 0;

    printf("Digite o nome do produto para retirar: ");
    scanf("%s", busca);

    for(int i = 0; i < MAX_PRODUTOS; i++) {
        if(strcmp(produto[i], busca) == 0) {
            printf("Quantidade para retirar: ");
            scanf("%d", &remover);

            if(remover <= quantidade[i]) {
                quantidade[i] = quantidade[i] - remover;
                printf("Retirada realizada.\n");
                printf("Nova quantidade: %d\n", quantidade[i]);
            } else {
                printf("Estoque insuficiente.\n");
            }
            achou = 1;
        }
    }

    if(achou == 0) {
        printf("Produto nao encontrado.\n");
    }
}

void listarProdutos(char produto[MAX_PRODUTOS][50], int quantidade[MAX_PRODUTOS]) {
    printf("\nLISTA DE PRODUTOS\n");
    for(int i = 0; i < MAX_PRODUTOS; i++) {
        
        if (strlen(produto[i]) > 0) {
            printf("Produto: %s Quantidade: %d\n", produto[i], quantidade[i]);
        }
    }
}
void cadastrarProdutos(char produto[MAX_PRODUTOS][50], int quantidade[MAX_PRODUTOS]) {
    int escolha2;

    printf("CADASTRO DE PRODUTOS\n\n");

    for(int i = 0; i < MAX_PRODUTOS; i++) {
               if (strlen(produto[i]) > 0) {
            continue; 
        }

        printf("Digite o nome do produto: ");
        scanf("%s", produto[i]);

        printf("Digite a quantidade: ");
        scanf("%d", &quantidade[i]);

        printf("Digite 0 para voltar ao menu ou 1 para continuar cadastrando: ");
        scanf("%d", &escolha2);

        if (escolha2 == 0) {
            return;
        }
    }
}

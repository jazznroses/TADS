#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void calcularAluguel()
{
    int tempo;
    float preco;

    printf("\nPor quanto tempo quer alugar? (MAX 7 DIAS): ");
    scanf("%d", &tempo);

    time_t t = time(NULL);
    struct tm *tm = localtime(&t);

    tm->tm_hour = 0;
    tm->tm_min = 0;
    tm->tm_sec = 0;

    t = mktime(tm);
    t += tempo * 24 * 60 * 60;

    tm = localtime(&t);

    printf("Prazo de entrega: %02d/%02d/%04d\n",
           tm->tm_mday, tm->tm_mon + 1, tm->tm_year + 1900);

    if (tempo >= 1 && tempo <= 5)
    {
        preco = 10.00;
    }
    else if (tempo > 5 && tempo <= 7)
    {
        preco = 20.00;
    }
    else
    {
        printf("Tempo inválido!\n");
        return;
    }

    printf("O preço para alugar por %d dias ficará R$%.2f\n", tempo, preco);
}

void comprar()
{
    char confirmarC[20];
    printf("\nPreço cheio do livro: RS$59,90\n\nConfirmar compra?\n\n");
    scanf("%s", confirmarC);

    if (strcmp(confirmarC, "Sim") == 0)
    {
        printf("\nObrigado pela compra!\n");
    }
}

int main()
{
    int escolha;
    char alugcompr[20];

    printf("\n--- LIVRARIA ---\n");
    printf("\n1- A DIVINA COMÉDIA\n");
    printf("2- CRIME E CASTIGO\n");
    printf("3- A METAMORFOSE\n");
    printf("4- O ASSASSINATO DO EXPRESSO ORIENTE\n");
    printf("5- MEMÓRIAS DO SUBSOLO\n\n");

    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("\nVocê escolheu A divina comédia.\n");
        break;
    case 2:
        printf("\nVocê escolheu Crime e Castigo.\n");
        break;
    case 3:
        printf("\nVocê escolheu A metamorfose.\n");
        break;
    case 4:
        printf("\nVocê escolheu O Assassinato do Expresso Oriente.\n");
        break;
    case 5:
        printf("\nVocê escolheu Authentic Games O Livro.\n");
        break;
    default:
        printf("\nOpção inválida!\n");
        return 0;
    }

    printf("\nDeseja alugar ou comprar?\n");
    scanf("%s", alugcompr);

    if (strcmp(alugcompr, "Alugar") == 0)
    {
        calcularAluguel();
    }
    else if (strcmp(alugcompr, "Comprar") == 0)
    {
        comprar();
    }
    else
    {
        printf("Opção inválida!\n");
    }

    return 0;
}
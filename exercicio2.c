#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#define gasol 7.00
#define alcool 4.15
#define diesel 7.50
int main()
{
    double raio, altura, volume;
    float preco;
    int combustivel;
    printf("\n Insira a altura em metros: \n");
    scanf("%lf", &altura);
    printf("\n Insira o raio em metros: \n");
    scanf("%lf", &raio);
    volume = M_PI * pow(raio, 2) * altura;
    printf("\n 1 - GASOLINA \n\n 2 - ALCOOL \n\n 3 - DIESEL \n\n");
    printf("\n Qual combustível você quer usar? \n");
    scanf("%d", &combustivel);
    switch (combustivel)
    {
    case 1:
        preco = volume * gasol;
        break;
    case 2:
        preco = volume * alcool;
        break;
    case 3:
        preco = volume * diesel;
        break;
    default:
        printf("\n Opção inválida. \n");
        return 1;
    }
    printf("O volume do cilindro é %.2f\n", volume);
    printf("Total: R$%.2f\n", preco);
}
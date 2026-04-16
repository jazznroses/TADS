#include <stdio.h>

int main()
{
    float salario;

    while (1)
    {
        printf("Digite o salário (0 para sair): ");
        scanf("%f", &salario);

        if (salario == 0)
            break;

        float salarioAumento, salarioBase;
        float aumento = 0.0, irpf = 0.0, inss = 0.0;
        float descontoINSS, descontoIRPF, salarioFinal;

        if (salario <= 1800.00)
            aumento = 15.0;
        else if (salario <= 2800.00)
            aumento = 12.0;
        else if (salario <= 3800.00)
            aumento = 10.0;
        else if (salario <= 4800.00)
            aumento = 7.0;
        else if (salario <= 8800.00)
            aumento = 4.0;

        salarioAumento = salario + (salario * aumento / 100.0);

        if (salarioAumento <= 1621.00)
            inss = 7.5;
        else if (salarioAumento <= 2902.84)
            inss = 9.0;
        else if (salarioAumento <= 4354.27)
            inss = 12.0;
        else
            inss = 14.0;
#include <stdio.h>

        int main()
        {
            float salario;

            while (1)
            {
                printf("Digite o salário (0 para sair): ");
                scanf("%f", &salario);

                if (salario == 0)
                    break;

                float salarioAumento, salarioBase;
                float aumento = 0.0, irpf = 0.0, inss = 0.0;
                float descontoINSS, descontoIRPF, salarioFinal;

                if (salario <= 1800.00)
                    aumento = 15.0;
                else if (salario <= 2800.00)
                    aumento = 12.0;
                else if (salario <= 3800.00)
                    aumento = 10.0;
                else if (salario <= 4800.00)
                    aumento = 7.0;
                else if (salario <= 8800.00)
                    aumento = 4.0;

                salarioAumento = salario + (salario * aumento / 100.0);

                if (salarioAumento <= 1621.00)
                    inss = 7.5;
                else if (salarioAumento <= 2902.84)
                    inss = 9.0;
                else if (salarioAumento <= 4354.27)
                    inss = 12.0;
                else
                    inss = 14.0;

                descontoINSS = salarioAumento * inss / 100.0;

                salarioBase = salarioAumento - descontoINSS;

                if (salarioBase <= 2428.80)
                    irpf = 0.0;
                else if (salarioBase <= 2826.65)
                    irpf = 7.5;
                else if (salarioBase <= 3751.05)
                    irpf = 15.0;
                else if (salarioBase <= 4664.68)
                    irpf = 22.5;
                else
                    irpf = 27.5;

                descontoIRPF = salarioBase * irpf / 100.0;

                salarioFinal = salarioBase - descontoIRPF;

                printf("Salário final: R$ %.2f\n\n", salarioFinal);
            }

            printf("Programa encerrado.\n");

            return 0;
        }
        descontoINSS = salarioAumento * inss / 100.0;

        salarioBase = salarioAumento - descontoINSS;

        if (salarioBase <= 2428.80)
            irpf = 0.0;
        else if (salarioBase <= 2826.65)
            irpf = 7.5;
        else if (salarioBase <= 3751.05)
            irpf = 15.0;
        else if (salarioBase <= 4664.68)
            irpf = 22.5;
        else
            irpf = 27.5;

        descontoIRPF = salarioBase * irpf / 100.0;

        salarioFinal = salarioBase - descontoIRPF;

        printf("Salário final: R$ %.2f\n\n", salarioFinal);
    }

    printf("Programa encerrado.\n");

    return 0;
}

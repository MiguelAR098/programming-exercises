#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, somaSalario = 0, mediaSalario;
    int filhos, somaFilhos = 0;
    int totalPessoas = 0;
    float maiorSalario = 0;
    int ate1000 = 0;

    printf("Digite o salário (negativo para encerrar): ");
    scanf("%f", &salario);

    while (salario >= 0)
    {
        printf("Digite o número de filhos: ");
        scanf("%d", &filhos);

        somaSalario += salario;
        somaFilhos += filhos;
        totalPessoas++;

        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }

        if (salario <= 1000)
        {
            ate1000++;
        }

        printf("\nDigite o salário (negativo para encerrar): ");
        scanf("%f", &salario);
    }

    if (totalPessoas > 0)
    {
        mediaSalario = somaSalario / totalPessoas;
        float mediaFilhos = (float)somaFilhos / totalPessoas;
        float percentual = (ate1000 * 100.0) / totalPessoas;

        printf("\nMédia do salário: R$ %.2f", mediaSalario);
        printf("\nMédia de filhos: %.2f", mediaFilhos);
        printf("\nMaior salário: R$ %.2f", maiorSalario);
        printf("\nPercentual com salário até R$1000: %.2f%%", percentual);
    }
    else
    {
        printf("\nNenhum dado foi inserido!");
    }

    return 0;
}

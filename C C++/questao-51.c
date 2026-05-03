#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    char sexo, resposta;

    int sim = 0, nao = 0;
    int totalHomens = 0, totalMulheres = 0;
    int mulheresSim = 0, homensNao = 0;

    for (i = 1; i <= 20; i++)
    {
        printf("Pessoa %d\n", i);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Resposta (S/N): ");
        scanf(" %c", &resposta);

        if (resposta == 'S' || resposta == 's')
        {
            sim++;
        }
        else if (resposta == 'N' || resposta == 'n')
        {
            nao++;
        }

        if (sexo == 'F' || sexo == 'f')
        {
            totalMulheres++;

            if (resposta == 'S' || resposta == 's')
            {
                mulheresSim++;
            }
        }
        else if (sexo == 'M' || sexo == 'm')
        {
            totalHomens++;

            if (resposta == 'N' || resposta == 'n')
            {
                homensNao++;
            }
        }

        printf("\n");
    }

    printf("\nTotal de SIM: %d", sim);
    printf("\nTotal de NÃO: %d", nao);

    if (totalMulheres > 0)
    {
        float percMulheresSim = (mulheresSim * 100.0) / totalMulheres;
        printf("\n%% de mulheres que responderam SIM: %.2f%%", percMulheresSim);
    }
    else
    {
        printf("\nNão houve mulheres na pesquisa.");
    }

    if (totalHomens > 0)
    {
        float percHomensNao = (homensNao * 100.0) / totalHomens;
        printf("\n%% de homens que responderam NÃO: %.2f%%", percHomensNao);
    }
    else
    {
        printf("\nNão houve homens na pesquisa.");
    }

    return 0;
}

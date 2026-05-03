#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float altura, maior, menor;
    float somaMulheres = 0, mediaMulheres;
    int i, contHomens = 0, contMulheres = 0;
    char sexo;

    for (i = 1; i <= 15; i++)
    {
        printf("Pessoa %d\n", i);

        printf("Digite a altura: ");
        scanf("%f", &altura);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (i == 1)
        {
            maior = altura;
            menor = altura;
        }

        if (altura > maior)
        {
            maior = altura;
        }

        if (altura < menor)
        {
            menor = altura;
        }

        if (sexo == 'F' || sexo == 'f')
        {
            somaMulheres += altura;
            contMulheres++;
        }

        if (sexo == 'M' || sexo == 'm')
        {
            contHomens++;
        }

        printf("\n");
    }

    printf("\nMaior altura: %.2f", maior);
    printf("\nMenor altura: %.2f", menor);

    if (contMulheres > 0)
    {
        mediaMulheres = somaMulheres / contMulheres;
        printf("\nMédia de altura das mulheres: %.2f", mediaMulheres);
    }
    else
    {
        printf("\nNão há mulheres no grupo.");
    }

    printf("\nNúmero de homens: %d\n", contHomens);

    return 0;
}

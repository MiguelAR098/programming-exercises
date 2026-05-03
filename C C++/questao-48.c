#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float pe, total = 0, valorFinal;
    int cp, i = 1;

    do
    {
        printf("Digite o valor do %d° produto (0 para forma de pagamento): R$ ", i);
        scanf("%f", &pe);

        if (pe > 0)
        {
            total += pe;
            i++;
        }

    } while (pe != 0);

    printf("\nValor total: R$ %.2f\n", total);

    printf("\nForma de pagamento:\n");
    printf("1- À vista em dinheiro ou cheque, com 10%% de desconto\n");
    printf("2- À vista com cartão de crédito, com 5%% de desconto\n");
    printf("3- Em 2 vezes, preço normal de etiqueta sem juros\n");
    printf("4- Em 3 vezes, preço de etiqueta com acréscimo de 10%%\n:");
    printf(":");
    scanf("%d", &cp);

    switch (cp)
    {
    case 1:
        valorFinal = total * 0.9;
        printf("\nPreço final: R$ %.2f", valorFinal);
        break;

    case 2:
        valorFinal = total * 0.95;
        printf("\nPreço final: R$ %.2f", valorFinal);
        break;

    case 3:
        printf("\n2 parcelas de R$ %.2f", total / 2);
        break;

    case 4:
        valorFinal = total * 1.10;
        printf("\n3 parcelas de R$ %.2f", valorFinal / 3);
        break;

    default:
        printf("Valor inválido!");
        break;
    }

    return 0;
}

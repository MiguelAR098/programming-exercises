#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n;
    int soma, sub, div, mult;

    printf("Digite o primeiro valor: ");
    scanf("%i", &n1);
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);

    printf("=====SELECIONE A OPERAÇÃO=====\n1- Adição\n2- Subtração\n3- Divisão\n4- Multiplicação");
    scanf("%i", &n);

    if (n == 1)
    {
        soma = n1 + n2;
        printf("%i + %i = %i", n1, n2, soma);
    } else if (n == 2)
    {
        sub = n1 - n2;
        printf("%i - %i = %i", n1, n2, sub);
    } else if (n == 3)
    {
        div = n1 / n2;
        printf("%i / %i = %i", n1, n2, div);
    } else if (n == 4)
    {
        mult = n1 * n2;
        printf("%i x %i = %i", n1, n2, mult);
    } else
    {
        printf("Operação inválida!");
    }

    return 0;
}
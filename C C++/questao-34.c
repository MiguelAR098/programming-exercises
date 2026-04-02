#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    int d = 0, f = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("\nDigite o %d° número: ", i);
        scanf("%d", &num);

        if (num >= 10 && num <= 50)
        {
            d++;
        }
        else
        {
            f++;
        }
    }

    printf("\nQuantidade de números dentro do intervalo: %d\n", d);
    printf("Quantidade de números fora do intervalo: %d", f);

    return 0;
}

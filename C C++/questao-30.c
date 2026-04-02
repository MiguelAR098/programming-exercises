#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade[10];
    int maiores = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\n%d° pessoa - Digite a sua idade: ", i + 1);
        scanf("%d", &idade[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (idade[i] >= 18)
        {
            maiores++;
        }
    }
        printf("\n%d Pessoas são maiores de idade.\n", maiores);

    return 0;
}

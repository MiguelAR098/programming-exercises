#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num[20];
    int maior;

    printf("\nDigite o 1° número: ");
    scanf("%d", &maior);

    for (int i = 1; i < 20; i++)
    {
        printf("\nDigite o %d° número: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] > maior)
        {
            maior = num[i];
        }
    }

    printf("\nO maior número é: %d", maior);

    return 0;
}

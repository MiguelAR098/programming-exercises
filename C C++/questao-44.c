#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, soma = 0, i = 0;
    float media;

    printf("Digite os números: ");
    scanf("%d", &num);

    while (num >= 0)
    {
        soma += num;
        i++;
        scanf("%d", &num);
    }

    if (i > 0)
    {
        media = (float)soma / i;
        printf("\nNúmero negativo digitado!\n");
        printf("\nSoma = %d\n", soma);
        printf("Média = %.2f\n", media);
    }

    return 0;
}

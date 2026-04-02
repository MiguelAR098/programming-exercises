#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int soma = 0;
    int quantidade = 0;

    for (int num = 13; num <= 73; num++)
    {
        if (num % 2 == 0)
        {
            soma += num;
            quantidade++;
        }
    }

    int media = soma / quantidade;
    printf("A média aritmética é: %d", media);

    return 0;
}

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, n;

    printf("Digite um número: ");
    scanf("%i", &num);

    n = num % 2;

    if (n != 0)
    {
        printf("O número é ímpar");
    } else
    {
        printf("O número é par");
    }
}
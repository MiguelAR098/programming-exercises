#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int x;
    float s = 0.0;

    printf("Digite um valor: ");
    scanf("%d", &x);

    for (int i = 1; i <= 20; i++)
    {
        if (x - i == 0)
        {
            printf("Erro! Divisão por zero.");
            return 1;
        } else
        {
            s += 1.0 / (x - i);
        }
    }

    printf("\nO resultado da série é: %.2f", s);

    return 0;
}

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float x, a, s = 0;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("\nDigite o valor de A: ");
    scanf("%d", &a);

    for (int i = 1; i <= 20; i++)
    {
        s += (i / a) * ((21 - i ) / pow(x, i));
    }

    printf("\nValor de S: %.2f", s);

    return 0;
}

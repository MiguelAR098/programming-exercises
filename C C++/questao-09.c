#include <stdio.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "Portuguese");

    int a, b, ab, ba;

    printf("Digite o valor da variável A: ");
    scanf("%i", &a);
    printf("Digite o valor da variável B: ");
    scanf("%i", &b);

    ab = b;
    ba = a;

    printf("As variáveis trocaram de valor entre si:");
    printf("\nAntigo valor de A: %i", a);
    printf("\nAntigo valor de B: %i", b);
    printf("\nNovo valor de A: %i", ab);
    printf("\nNovo valor de B: %i", ba);

    return 0;
}
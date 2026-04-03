#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a = 1, b = 1, prox;

    printf("Termos calculados:\n");
    printf("%d %d ", a, b);
    for (int i = 3; i <= 10; i++)
    {
        prox = a + b;
        a = b;
        b = prox;

        printf("%d ", prox);
    }

    return 0;
}

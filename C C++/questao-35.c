#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;
    int h = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        h+= i;
    }

    printf("\nA soma total de %d é: %d", n, h);

    return 0;
}

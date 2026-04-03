#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int k, n;
    int resul = 1;

    printf("Digite o valor da base: ");
    scanf("%d", &k);
    printf("\nDigite o valor do expoente: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        resul = resul * k;
    }

    printf("\n%d^%d = %d", k, n, resul);

    return 0;
}

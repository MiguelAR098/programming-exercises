#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, resul, i = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("\nTABUADA DO NÚMERO %d", n);
    while (i <= 10)
    {
        resul = n * i;
        printf("\n%d x %d = %d", n, i, resul);
        i++;
    }

    return 0;
}

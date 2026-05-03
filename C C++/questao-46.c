#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n, i;
    int fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Não existe fatorial de número negativo!\n");
    } else {
        i = 1;
        while (i <= n) {
            fatorial = fatorial * i;
            i = i + 1;
        }

        printf("O fatorial de %d é %d\n", n, fatorial);
    }

    return 0;
}

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int k = 2;
    int resul = 1;
    printf("Potências do número %d\n", k);
    for (int n = 1; n <= 3; n++)
    {
        resul = resul * k;
        printf("\n%d^%d = %d\n", k, n, resul);
    }

    return 0;
}

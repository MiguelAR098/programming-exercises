#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número:\n", i + 1);
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (n[i] >= 100 && n[i] <= 200)
            printf("Número %d está entre 100 e 200\n", n[i]);
        else
            printf("Número %d fora da faixa entre 100 e 200\n", n[i]);
    }
    return 0;
}

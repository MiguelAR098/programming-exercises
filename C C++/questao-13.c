#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float pf, pf1, pi, pr, pfc;

    printf("Digite o valor do preço de fábrica de um automóvel: R$");
    scanf("%f", &pf);

    pf1 = pf;
    pi = (pf * 0.45);
    pr = (pf1 * 0.28);
    pfc = pf + pi + pr;

    printf("O preço final do automóvel é de: R$%.2f", pfc);

    return 0;
}
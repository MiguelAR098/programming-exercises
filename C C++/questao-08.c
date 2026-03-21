#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float sf, tv, sl;

    printf("Salário fixo do funcionário: ");
    scanf("%f", &sf);
    printf("Total de vendas no mês pelo funcionário: ");
    scanf("%f", &tv);

    sl = (tv * 0.15) + sf;

    printf("O salário fixo do funcionário é: R$ %.2f", sf);
    printf("\nO salário final do funcionário é: R$ %.2f", sl);

    return 0;
}
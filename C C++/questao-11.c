#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int produto, cliente, troco, tc;
    int c200, c100, c50, c20, c10, c5, c2, c1;

    printf("Digite o valor do produto: R$");
    scanf("%i", &produto);
    printf("Quanto o cliente pagou: R$");
    scanf("%i", &cliente);

    troco = cliente - produto;
    tc = troco;

    c200 = troco / 200;
    troco = troco % 200;

    c100 = troco / 100;
    troco = troco % 100;

    c50 = troco / 50;
    troco = troco % 50;

    c20 = troco / 20;
    troco = troco % 20;

    c10 = troco / 10;
    troco = troco % 10;

    c5 = troco / 5;
    troco = troco % 5;

    c2 = troco / 2;
    troco = troco % 2;

    c1 = troco / 1;
    troco = troco % 1;

    printf("O troco é de: R$%i,00", tc);
    printf("\n%i nota(s) de R$200,00", c200);
    printf("\n%i nota(s) de R$100,00", c100);
    printf("\n%i nota(s) de R$50,00", c50);
    printf("\n%i nota(s) de R$20,00", c20);
    printf("\n%i nota(s) de R$10,00", c10);
    printf("\n%i nota(s) de R$5,00", c5);
    printf("\n%i nota(s) de R$2,00", c2);
    printf("\n%i nota(s) de R$1,00", c1);

    return 0;
}
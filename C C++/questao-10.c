#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int saque;
    int c200, c100, c50, c20, c10, c5, c2, c1;

    printf("Digite o valor que deseja sacar: R$");
    scanf("%i", &saque);

    c200 = saque / 200;
    saque = saque % 200;

    c100 = saque / 100;
    saque = saque % 100;

    c50 = saque / 50;
    saque = saque % 50;

    c20 = saque / 20;
    saque = saque % 20;

    c10 = saque / 10;
    saque = saque % 10;

    c5 = saque / 5;
    saque = saque % 5;

    c2 = saque / 2;
    saque = saque % 2;

    c1 = saque / 1;
    saque = saque % 1;

    printf("%i nota(s) de R$200,00", c200);
    printf("\n%i nota(s) de R$100,00", c100);
    printf("\n%i nota(s) de R$50,00", c50);
    printf("\n%i nota(s) de R$20,00", c20);
    printf("\n%i nota(s) de R$10,00", c10);
    printf("\n%i nota(s) de R$5,00", c5);
    printf("\n%i nota(s) de R$2,00", c2);
    printf("\n%i nota(s) de R$1,00", c1);
    
    return 0;
}
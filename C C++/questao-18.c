#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int m, mc;

    printf("Digite quantas maçãs deseja comprar: R$");
    scanf("%i", &m);

    if (m <= 11)
    {
        mc = m * 0.30;
        printf("Valor total foi de: R$%i,00", mc);
    } else
    {
        mc = m * 0.25;
        printf("Valor total foi de: R$%i,00", mc);
    }
    
    return 0;
}
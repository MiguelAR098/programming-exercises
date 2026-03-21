#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float x, y, soma, produto, quociente;
    printf("Digite o primeiro número: ");
    scanf("%f", &x);
    printf("Digite o segundo número: ");
    scanf("%f", &y);

    soma = x + y;
    produto = x * y;
    quociente = x / y;

    printf("Soma: %2f", soma);
    printf("\nProduto: %2f", produto);
    printf("\nQuociente: %2f", quociente);

    return 0;
}
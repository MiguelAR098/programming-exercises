#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x, y, quociente, resto;
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("Digite o segundo número: ");
    scanf("%d", &y);

    quociente = x / y;
    resto = x % y;

    printf("O resultado da divisão é: %d", quociente);
    printf("\nO resto da divisão é: %d", resto);

    return 0;
}
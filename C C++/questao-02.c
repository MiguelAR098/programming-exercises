#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int number, antecessor, sucessor;

    printf("Digite um número: ");
    scanf("%d", &number);

    antecessor = number - 1;
    sucessor = number + 1;

    printf("O antecessor é: %d", antecessor);
    printf("\nO sucessor é: %d", sucessor);
    return 0;
}
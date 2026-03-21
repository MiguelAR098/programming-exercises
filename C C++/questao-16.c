#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, n;

    printf("Digite um número: ");
    scanf("%i", &num);

    if (num > 0)
    {
        printf("O valor digitado foi: %i", num);
    } else
    {
        n = num * -1;
        printf("O valor invertido é: %i", n);
    }
    
    return 0;
}
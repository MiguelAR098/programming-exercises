#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%i", &n1);
    printf("Digite o segundo número: ");
    scanf("%i", &n2);

    if (n1 > n2)
    {
        printf("Os números são diferentes!");
        printf("\nO maior número é: %i", n1);
    } else if (n1 < n2)
    {
        printf("Os números são diferentes!");
        printf("\nO maior número é: %i", n2);
    } else 
    {
        printf("Ambos os números são iguais!");
    }
    
    return 0;
}
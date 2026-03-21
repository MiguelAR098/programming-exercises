#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int l1, l2, l3;

    printf("Digite o valor do primeiro lado: ");
    scanf("%i", &l1);
    printf("Digite o valor do segundo lado: ");
    scanf("%i", &l2);
    printf("Digite o valor do terceiro lado: ");
    scanf("%i", &l3);

    if (l1 <= l2 + l3 && l2 <= l1 + l3 && l3 <= l1 + l2)
    {
    if (l1 == l2 && l2 == l3)
    {
        printf("Todos os lados são iguais, é um triângulo equilátero!");
    } else if (l1 == l2 || l1 == l3 || l2 == l3)
    {
        printf("Dois lados são iguais, é um triângulo isóscele!");
    } else
    {
        printf("Todos os lados são diferentes, é um triângulo escaleno!");
    }
    } else
    {
        printf("ERRO! Comprimento maior do que os dois lados somados.");
    }
    
    return 0;
}
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;

    printf("Digite o primeiro número: ");
    scanf("%i", &n1);
    printf("Digite o segundo número: ");
    scanf("%i", &n2);
    printf("Digite o terceiro número: ");
    scanf("%i", &n3);

    if (n1 >= n2 && n1 >= n3)
    {
        if (n2 >= n3)
        {
            printf("Primeiro: %i\nSegundo: %i\nTerceiro: %i", n1, n2, n3);
        } else 
        {
            printf("Primeiro: %i\nSegundo: %i\nTerceiro: %i", n1, n3, n2);
        }
        
    }

    else if (n2 >= n1 && n2 >= n3)
    {
        if (n1 >= n3)
        {
            printf("Primeiro: %i\nSegundo: %i\nTerceiro: %i", n2, n1, n3);
        } else
        {
            printf("Primeiro: %i\nSegundo: %i\nTerceiro: %i", n2, n3, n1);
        }
    }
    
    else if (n3 >= n1 && n3>= n2)
    {
        if (n1 >= n2)
        {
            printf("Primeiro: %i\nSegundo: %i\nTerceiro: %i", n3, n1, n2);
        } else
        {
            printf("Primeiro: %i\nSegundo: %i\nTerceiro: %i", n3, n2, n1);
        }
    }
    
    return 0;
}
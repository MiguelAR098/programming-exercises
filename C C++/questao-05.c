#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float num, pol;

    printf("Digite um número (cm) para polegadas: ");
    scanf("%f", &num);

    pol = num / 2.54;

    printf("O resultado é: %.2f polegadas", pol);

    return 0;
}
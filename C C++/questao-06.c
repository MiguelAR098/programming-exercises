#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float raio, area;
    printf("Digite o valor do raio de um círculo: ");
    scanf("%f", &raio);

    area = 3.14 * (raio * raio);

    printf("A área do círculo é: %.2f cm²", area);

    return 0;
}
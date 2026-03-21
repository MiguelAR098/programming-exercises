#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float raio, altura, area, volume;
    printf("Digite o valor do raio de um cilindro: ");
    scanf("%f", &raio);

    printf("Digite agora o valor da altura do cilindro: ");
    scanf("%f", &altura);

    area = 2 * 3.14 * raio * (altura + raio);
    volume = 3.14 * (raio * raio) * altura;

    printf("A área do cilindro é: %.2f cm²", area);
    printf("\nO volume do cilindro é: %.2f cm³", volume);

    return 0;
}
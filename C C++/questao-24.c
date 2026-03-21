#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char classe, m;
    float a, b, c, consumo, vf, vp;

    a = 0.5;
    b = 0.8;
    c = 1.0;

    printf("Digite o seu tipo de classe consumidora: \nA\nB\nC\n");
    scanf(" %c", &classe);

    m = toupper(classe);

    if (classe == 'A' || classe == 'a')
    {
        printf("Digite o seu consumo de energia(KWh): R$");
        scanf("%f", &consumo);

        vf = consumo * a;
        vp = vf + (0.3 * vf);

        printf("Você pertence a classe consumidora %c, logo sua tarifa é de %.1f", m, a);
        printf("\nO valor a ser pago é de: R$%.2f", vp);

    }else if (classe == 'B' || classe == 'b')
    {
        printf("Digite o seu consumo de energia(KWh): R$");
        scanf("%f", &consumo);

        vf = consumo * b;
        vp = vf + (0.3 * vf);

        printf("Você pertence a classe consumidora %c, logo sua tarifa é de %.1f", m, b);
        printf("\nO valor a ser pago é de: R$%.2f", vp);

    }else if (classe == 'C' || classe == 'c')
    {
        printf("Digite o seu consumo de energia(KWh): R$");
        scanf("%f", &consumo);

        vf = consumo * c;
        vp = vf + (0.3 * vf);

        printf("Você pertence a classe consumidora %c, logo sua tarifa é de %.1f", m, c);
        printf("\nO valor a ser pago é de: R$%.2f", vp);

    }else
    {
        printf("Valor inválido!");
    }

    return 0;
}
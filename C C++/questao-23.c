#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float a, b, c, d, x, x1, x2;

    printf("Digite o valor do coeficiente A: ");
    scanf("%f", &a);
    printf("\nDigite o valor do coeficiente B: ");
    scanf("%f", &b);
    printf("\nDigite o valor do coeficiente C: ");
    scanf("%f", &c);

    d = (b * b) - (4 * a * c);

    if (d < 0) {
        printf("\nValor de Delta: %.0f", d);
        printf("\nNão existem raízes para raiz quadrada negativa!");
        
    } else if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("\nValor de x¹: %.0f", x1);
        printf("\nValor de x²: %.0f", x2);
        printf("\nValor de Delta: %.0f", d);
        printf("\nDelta maior do que zero, duas raízes distintas!");

    } else {
        x = - b / (2 * a);
        printf("\nValor de x: %.0f", x);
        printf("\nValor de Delta: %.0f", d);
        printf("\nDelta igual a zero, ambas a raízes são iguais!");
    }

    return 0;
}
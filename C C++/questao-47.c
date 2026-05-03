#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float h, f, m;
    int s;

    printf("Digite a sua altura: ");
    scanf("%f", &h);

    while (h >= 0)
    {

        printf("\nDigite o seu sexo:\n1- Feminino\n2- Masculino\n:");
        scanf("%d", &s);

        switch (s)
        {
        case 1:
            f = 62.1 * h - 44.7;
            printf("\nSeu peso ideal como mulher é: %f", f);
            break;

        case 2:
            m = 72.7 * h - 58;
            printf("\nSeu peso ideal como homem é: %f", m);
            break;

        default:
            printf("\nValor inválido!");
            break;
        }

        printf("\nDigite a sua altura (valor negativo para sair): ");
        scanf("%f", &h);
    }

    return 0;
}

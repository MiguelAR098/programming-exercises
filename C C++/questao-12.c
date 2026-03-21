#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int m1, m2, m3, sm;

    m1 = (7 + 8 + 9) / 3;
    m2 = (4 + 5 + 6) / 3;
    sm = m1 + m2;
    m3 = (m1 + m2) / 2;

    printf("O resultado da primeira média aritmética é: %i", m1);
    printf("\nO resultado da segunda média aritmética é: %i", m2);
    printf("\nA soma das duas médias é: %i", sm);
    printf("\nA média das médias entre os dois é: %i", m3);

    return 0;
}
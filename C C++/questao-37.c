#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float s = 0.0;

    for (int i = 1; i <= 50; i++)
    {
        s += (2.0 * i - 1) / i;
    }

    printf("O resultado final da soma até 50 é: %.2f", s);

    return 0;
}

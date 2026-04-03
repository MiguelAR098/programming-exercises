#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float s = 0.0;

    for (int i = 1; i <= 10; i++)
    {
        s += 1.0 / i; 
    }

    printf("O resultado final da soma até 10 é: %.2f", s);

    return 0;
}

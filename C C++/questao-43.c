#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float mi, mf;
    int t = 0;

    printf("Digite o valor da massa: ");
    scanf("%f", &mi);

    mf = mi;

    while (mf >= 0.5)
    {
        mf = mf / 2;
        t += 50;
    }

    printf("\nMassa inicial: %.2f\n", mi);
    printf("\nMassa final: %.2f\n", mf);
    printf("\nTempo total: %ds", t);

    return 0;
}

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    for (int c = 50; c <= 65; c++)
    {
        float f = (c * 9.0/5) + 32;
        printf("%d°C -> %.1f°F\n", c, f);
    }

    return 0;
}

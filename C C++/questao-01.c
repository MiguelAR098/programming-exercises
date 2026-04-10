#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x, y;
    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o primeiro valor: ");
    scanf("%d", &y);
    
    printf("%d", x * y);
}

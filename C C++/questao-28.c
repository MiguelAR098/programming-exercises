#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int n, soma = 0;
    
    printf("Soma dos números:\n\n");
    
    for(n = 1; n <= 100; n++){
        soma += n;
        printf("1 + %d = %d\n", n, soma);
    }
    
    return 0;
}

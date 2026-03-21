#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int n, s, c;
    
    printf("Soma dos números:");
    
    for(n = 1; n <= 100; n++){
        s = n + 1;
        c = n * s / 2;
        printf("\n %i + %i = %i", n, s, c);
    }
    
    return 0;
}
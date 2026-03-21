#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int n, q;
    
    for(n = 15; n <= 30; n++){
        q = (n * n);
        printf("Quadrado dos números entre 15 e 30: %i \n", q);
    }
    
    return 0;
}
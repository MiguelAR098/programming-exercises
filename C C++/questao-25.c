#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int num, n;
    
    for(n = 14; n <= 30; n++) {
        
        if (n % 2 == 0) {
            printf("Números pares: %i \n", n);
        }
        
    }
    
    return 0;
}
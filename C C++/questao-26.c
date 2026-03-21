#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int num, n;
    n = 0;
    
    while(n <= 10){
        num = 7 * n;
        printf("7 x %i = %i \n", n, num);
        n++;
    }
    
    return 0;
}
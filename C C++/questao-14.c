#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int number;

    printf("Digite um valor: ");
    scanf("%d", &number);

    if (number > 0){
        printf("É positivo!");
    } else if(number < 0){
        printf("É negativo!");
    } else{
        printf("É nulo!");
    }
    
    return 0;
}
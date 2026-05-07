#include <stdio.h>

int main() {
    
    
    int idade;
    printf("Informe sua idade: ");
    while (scanf("%i", &idade) != 1)
    printf("Entrada invalida! Digite apenas numeros: ");
    while (getchar() != '\n'); 

    printf("Voce tem %i anos \n", idade);
    
    return 0;
}
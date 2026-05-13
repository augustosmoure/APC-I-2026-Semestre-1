#include <stdio.h>

int main () {


    int numero;
    printf("Entre com um numero: ");
    scanf("%i", &numero);
    while(getchar() != '\n');

    if (numero % 2 == 0) {
       printf("Esse numero eh par: %i! \n ");
    } else {
        printf("Esse numero eh impar: %i! \n ");
    }


    return 0;
}
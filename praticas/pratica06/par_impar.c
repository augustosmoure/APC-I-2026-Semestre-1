#include <stdio.h>

int main () {


    int numero;
    printf("Entre com um numero: ");
    scanf("%i", &numero);
    while(getchar() != '\n');

    if (numero % 2 == 0) {
       printf("Esse numero eh par! \n ");
    } else {
        printf("Esse numero eh impar! \n ");
    }


    return 0;
}
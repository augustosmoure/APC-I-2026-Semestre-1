#include <stdio.h>

int main() {

    float deci;
    printf("Digite um numero decimal qualquer: \n");
    scanf("%f", &deci);
    while(getchar() != '\n');
    printf("O decimal escolhido foi %.2f", deci);

    return 0;
}
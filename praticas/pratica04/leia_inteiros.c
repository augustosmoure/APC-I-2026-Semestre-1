#include <stdio.h>

int main() {
    int n1;
    int n2;

    printf("Digite um numero inteiro qualquer: \n");
    scanf("%i", &n1);
    while(getchar() != '\n');

    printf("Digite outro numero inteiro qualquer: \n");
    scanf("%i", &n2);
    while(getchar() != '\n');

    printf("Os numeros digitados foram '%i' e '%i'.", n1, n2);


    return 0;
}
#include <stdio.h>

int main() {

    char letra_pressionada;
    printf("Digite um carctere: \n");
    scanf("%c", &letra_pressionada);
    while(getchar() != '\n');
    printf("O caractere digitado foi '%c'.", letra_pressionada);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {

    char *string;
    printf("Coloque seu primeiro nome: \n");
    scanf("%c", &*string);
    while(getchar() != '\n');

    printf("Seu nome eh: %c", &*string);

    return 0;
}
#include <stdio.h>

int main() {
    int vetor[10];

    printf("Entre com 10 numeros inteiros: \n");

    for(int i = 0; i < 10; i++) {
        printf("Digite um numero para a posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Numeros guardados no vetor: \n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
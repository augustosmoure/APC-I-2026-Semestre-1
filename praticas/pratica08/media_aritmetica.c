#include <stdio.h> 

int main() {
    int soma = 0;
    int n = 0;
    printf("Digite quantos numeros quer colocar: \n");
    scanf("%i", &n);
    int num[n];

    for(int i = 0; i < n; i++) {
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &num[i]);

        soma = soma + num[i];
    }
    printf("\nNumeros Digitados: \n");
        for(int i = 0; i < n; i++) {
            printf("%i, ", num[i]);
        }
    printf("\n");

    int soma_acumulada = 0;
    for(int i=0; i < n; i++) {
        int soma_anterior = soma_acumulada;
        soma_acumulada += num[i];
       printf("%i + %i = %i\n", soma_anterior, num[i], soma_acumulada);
        }

        float media = (float)soma / n;
        printf("Soma total: %i\n", soma);
        printf("Media aritmetica: %.2f\n", media);

    return 0;
}
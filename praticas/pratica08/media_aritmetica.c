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
    printf("Numeros Digitados: \n");
        for(int i = 0; i < n; i++) {
            printf("%i, ", num[i]);
        }
    printf("\n");

    for(int i=0; i < n; i++) {
       printf("%i + %i = %i\n", n, num[i], n + num[i]);
        }

    return 0;
}
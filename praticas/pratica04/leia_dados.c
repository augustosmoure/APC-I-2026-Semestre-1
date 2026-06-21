#include <stdio.h>

int main() {

    int idade;
    float altura;
    char gen;
    double peso;

    printf("Informe sua idade:\n");
    scanf("%i", &idade);
    while(getchar() != '\n');

    printf("Informe sua altura:\n");
    scanf("%f", &altura);
    while(getchar() != '\n');

    printf("Informe seu genero: ('M' para masculino e 'F' para feminino)\n");
    scanf("%c", &gen);
    while(getchar() != '\n');

    printf("Informe seu peso:\n");
    scanf("%lf", &peso);
    while(getchar() != '\n');

    printf("Voce tem %i anos, %.2f de altura, se identifica como %c e pesa %.3lf", idade, altura, gen, peso);

    return 0;
}
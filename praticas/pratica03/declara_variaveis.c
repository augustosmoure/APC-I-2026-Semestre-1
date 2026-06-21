#include <stdio.h> 

int main () {

    char genero;
    printf("Qual seu genero? Digite 'M' para masculino ou 'F' para feminino: ");
    scanf("%c", &genero);
    while(getchar() != '\n');

    int idade;
    printf("Quantos anos voce tem? ");
    scanf("%i", &idade);
    while(getchar() != '\n');

    float altura;
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    while(getchar() != '\n');

    double peso;
    printf("Informe seu peso: ");
    scanf("%lf", &peso);
    while(getchar() != '\n');
    
    printf("Voce eh: %c! \n", genero);
    printf("Voce tem: %i anos! \n", idade);
    printf("Voce tem: %.2f de altura! \n", altura);
    printf("Voce pesa : %.2lf! \n", peso);

    return 0;
}
#include <stdio.h> 

int main () {

    int idade;
    printf("Entre com sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n');

    int crianca = idade <= 12;
    int adolescente = idade >= 13 && idade <= 17;
    int adulto = idade >= 18 && idade <= 64;
    int idoso = idade >= 65;
    if (crianca) {
        printf("Com %i anos voce eh considerado(a) crianca.\n", idade);
    } else if (adolescente) {
        printf("Com %i anos voce eh considerado(a) adolescente.\n", idade);
    } else if (adulto) {
        printf("Com %i anos voce eh considerado(a) adulto.\n", idade);
    } else {
        printf("Com %i anos voce eh considerado(a) idoso.\n", idade);
    }



    return 0;
}
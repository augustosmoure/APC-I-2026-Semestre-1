#include <stdio.h>

int main () {
    int dia_da_semana;

    printf("Digite um numero de 1 a 7: (Dia 1 eh equivalente a domingo)\n");
    scanf("%i", &dia_da_semana);
    while(getchar() != '\n');

    switch (dia_da_semana) {
        case 1: printf("Domingo eh final de semana."); break;
        case 2: printf("Segunda eh dia util"); break;
        case 3: printf("Terca eh dia util"); break;
        case 4: printf("Quarta eh dia util"); break;
        case 5: printf("Quinta eh dia util"); break;
        case 6: printf("Sexta eh dia util"); break;
        case 7: printf("Sabado eh final de semana"); break;
        default: printf("Opcao inválida! Tente novamente.");
    }
    return 0;
}
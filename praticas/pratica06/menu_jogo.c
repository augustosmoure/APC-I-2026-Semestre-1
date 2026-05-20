#include <stdio.h>

int main() {
    int opcao = 0;
    printf("Escolha uma das opcoes seguintes: \n");
    printf("1 - Novo jogo\n");
    printf("2 - Continuar jogo\n");
    printf("3 - Ver pontuacao\n");
    printf("4 - Sair\n");
    scanf("%i", &opcao);
    while(getchar() != '\n');

    switch (opcao) {
        case 1: printf("Seu novo jogo vai ser red dead ||."); break;
        case 2: printf("Volte a jogar."); break;
        case 3: printf("Voce nao tem pontos."); break;
        case 4: printf("Saindo."); break;
        default: printf("Opcao invalida, tente novamente.");
    }
    return 0;
}
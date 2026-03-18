#include <stdio.h>

int main() {
    /*
      =============================
             BOLETIM DE NOTAS
      =============================  
      Disciplina  A1   A2   A3   MF
      APC 1       7.0  6.0  6.0  6.5
      DISCRETA    6.0  6.0  8.0  6.5
      CALCULO     5.0  5.0  5.0  5.0
    */

    char tecla_pressionada = 'A';
    int inteiro = 10;
    float decimal = 5.2f; // ate 6 casas decimais
    double duplo = 5.2; // ate 12 casas decimais

    printf("=============================\n");
    printf("      BOLETIM DE NOTAS\n");
    printf("=============================\n");
    
    int codigo_disciplina;
    float nota_a1;
    float nota_a2;
    float nota_a3;
    float media_final;

    codigo_disciplina = 118;
    nota_a1 = 7.0f;
    nota_a2 = 6.0f;
    nota_a3 = 6.0f;
    media_final = 6.5f;

    printf("Disciplina    A1     A2     A3     MF\n");

    

    printf("%05i       %5.1f  %5.1f  %5.1f  %5.1f\n", codigo_disciplina, nota_a1, nota_a2, nota_a3, media_final);

    codigo_disciplina = 257;
    nota_a1 = 6.0f;
    nota_a2 = 6.0f;
    nota_a3 = 8.0f;
    media_final = 6.5f;

    printf("%05i      docker compos  %5.1f  %5.1f  %5.1f  %5.1f\n", codigo_disciplina, nota_a1, nota_a2, nota_a3, media_final);

    codigo_disciplina = 91;
    nota_a1 = 5.0f;
    nota_a2 = 5.0f;
    nota_a3 = 5.0f;
    media_final = 5.0f;

    printf("%05i       %5.1f  %5.1f  %5.1f  %5.1f\n", codigo_disciplina, nota_a1, nota_a2, nota_a3, media_final);

    return 0;
}

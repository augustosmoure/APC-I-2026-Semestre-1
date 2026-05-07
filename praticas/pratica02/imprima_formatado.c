#include <stdio.h>

int main() {
/*
==============================
      N O T A    L E G A L
==============================
Produto         Qtd Valor Unit
Camiseta        002      39.99
Calca           001      89.90
Meia Social     003      19.99
==============================
Total                   229.85
*/

    printf("==============================\n");
    printf("          Nota Legal\n");
    printf("==============================\n");
    printf("Produto         Qtd  Valor  Unit\n");

    char p_01[] = "Camiseta";
    char p_02[] = "Calca";
    char p_03[] = "Meia Social";
    float qtd_01;
    float qtd_02;
    float qtd_03;
    float valor_01;
    float valor_02;
    float valor_03;

    qtd_01 = 002;
    valor_01 = 39.99;

    printf("%s         %.0f   %.2f\n", p_01, qtd_01, valor_01);

    qtd_02 = 001;
    valor_02 = 89.90;

    printf("%s            %.0f   %.2f\n", p_02, qtd_02, valor_02);

    qtd_03 = 003;
    valor_03 = 19.99;

    printf("%s      %.0f   %.2f\n", p_03, qtd_03, valor_03);

    printf("==============================\n");

    return 0;
}
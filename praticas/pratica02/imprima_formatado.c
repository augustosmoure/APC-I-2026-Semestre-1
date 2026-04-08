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
    printf("      Nota Legal\n");
    printf("==============================\n");
    printf("Produto         Qtd Valor Unit\n");

    char camiseta;
    float qtd_01;
    float valor;

    qtd_01 = 002;
    valor = 39.99;

    printf("%c                 %.0f   %.2f\n", camiseta, qtd_01, valor);

    printf("==============================\n");

    return 0;
}
/*
Exercício: Soma das Diagonais de uma Matriz 3x3

Objetivo:
- Ler uma matriz 3x3 de números inteiros.
- Imprimir a matriz.
- Calcular e exibir a soma da diagonal principal e da diagonal secundária.
*/

#include <stdio.h>

int main() {
    int m[3][3];
    int l, c;
    int soma_dp = 0;
    int soma_ds = 0;
    
    for (l = 0; l < 3;l++){
        for (c = 0; c < 3; c++){
            scanf("%d", &m[l][c]);
        }
    }
    
    soma_dp = m[0][0] + m[1][1] + m[2][2];
    soma_ds = m[2][0] + m[1][1] + m[0][2];
    
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
        printf("%d ", m[l][c]);
        }
    printf("\n");
    }

    printf("Soma da diagonal principal: %d\n", soma_dp);
    printf("Soma da diagonal secundária: %d\n", soma_ds);
    
    return 0;
}
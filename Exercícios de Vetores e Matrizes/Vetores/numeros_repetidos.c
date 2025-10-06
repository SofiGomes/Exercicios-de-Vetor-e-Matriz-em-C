/*
Este programa lê N números inteiros e identifica os números repetidos.
Ele imprime apenas os números que aparecem mais de uma vez, sem repeti-los na saída.
*/

#include <stdio.h>

int main() {
    int N, i, j, k = 0, repetido;
    scanf("%d", &N);
    int vetor[N], rep[N];

    for (i = 0; i < N; i++) scanf("%d", &vetor[i]);

    for (i = 0; i < N; i++) {
        repetido = 0;
        for (j = i + 1; j < N; j++) {
            if (vetor[i] == vetor[j]) {
                int jaAdicionado = 0;
                for (int x = 0; x < k; x++) {
                    if (rep[x] == vetor[i]) {
                        jaAdicionado = 1;
                        break;
                    }
                }
                if (!jaAdicionado) {
                    rep[k++] = vetor[i];
                }
                break;
            }
        }
    }

    for (i = 0; i < k; i++) {
        printf("%d", rep[i]);
        if (i < k - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
/*
Escreva um programa em C que leia 10 números inteiros e armazene-os em um vetor. 
O programa deve:
1. Exibir todos os números lidos.
2. Exibir os números na ordem inversa.
3. Contar e exibir a quantidade de números pares entre os valores digitados.
*/

#include <stdio.h>

int main() {
    int v[10];
    int par = 0;
    int inverso;
    int i;
    
    for (i = 0; i < 10; i++){
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0){
            par++;
        }
    }
    
    printf("Números lidos: ");
    for (i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    
    printf("Números na ordem inversa: ");
    for (i = 9; i >= 0; i--){
        printf("%d ", v[i]);
    }
    printf("\n");
    
    for (i = 9; i >= 0; i--){
        inverso = v[i];
    }
    
    printf("Quantidade de números pares: %d\n", par);
    
    return 0;
}

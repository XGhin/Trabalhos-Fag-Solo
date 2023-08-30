/* Ex 8
Faça um algoritmo que monte uma matriz 4x4 de números reais calcule e
mostre a soma dos elementos da diagonal secundária.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float matriz[4][4],somad;
int l, c, i;

int main(){
// Cria a matriz
    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            printf("Digite o valor na linha %d da coluna %d na Matriz A: ", l, c);
            scanf("%f", &matriz[l][c]);
        }
    }
    
// Imprime os elementos da diagonal secundaria
    l = 0;
    c = 3;
    for(i = 0; i < 4; i++){
        somad += matriz[l][c];
        l++;
        c--;
    }

// Imprime a soma da Diagonal Secundaria
    printf("A soma da diagonal secundaria foi: %.2f", somad);
}

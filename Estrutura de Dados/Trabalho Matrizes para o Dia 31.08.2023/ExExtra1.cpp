/* Ex Extra 1
Cria uma matriz 3x3 e retorna a soma da linha x com a coluna x
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int matriz[3][3], l, c, somal[3], somac[3], i;

int main(){
// Cria a matriz
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("Digite o valor na linha %d da coluna %d na Matriz A: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

// Guarda as linhas
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            if(l == 0){
                i = 0;
                somal[i] += matriz[l][c];
            }
            if(l == 1){
                i = 1;
                somal[i] += matriz[l][c];
            }
            if(l == 2){
                i = 2;
                somal[i] += matriz[l][c];
            }
        }
    }
    
// Guarda as colunas
    for(c = 0; c < 3; c++){
        for(l = 0; l < 3; l++){
            if(c == 0){
                i = 0;
                somac[i] += matriz[l][c];
            }
            if(c == 1){
                i = 1;
                somac[i] += matriz[l][c];
            }
            if(c == 2){
                i = 2;
                somac[i] += matriz[l][c];
            }
        }
    }

// printa a matriz
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("{%d} ", matriz[l][c]);
        }
        printf("\n");
    }
// printa o valor da soma das linha e da coluna
    for(i = 0; i < 3; i++){
        printf("O valor da soma dos elementos da linha %d e coluna %d foi: %d\n", i, i, somal[i] + somac[i]);
    }
}
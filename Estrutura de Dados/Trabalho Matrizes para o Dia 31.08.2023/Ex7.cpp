/* Ex 7
Monte um algoritmo com uma matriz 3x3 e dois vetores de três posições cada
um, que contenham respectivamente, as somas das linhas e das colunas da
matriz. Escreva a matriz e os vetores criados.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int matriz[3][3], linhas[3], colunas[3], l, c, i, somal0, somal1, somal2, somac0, somac1, somac2;
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
                somal0 += matriz[l][c];
            }
            if(l == 1){
                somal1 += matriz[l][c];
            }
            if(l == 2){
                somal2 += matriz[l][c];
            }
        }
    }
    
// Guarda as colunas
    for(c = 0; c < 3; c++){
        for(l = 0; l < 3; l++){
            if(c == 0){
                somac0 += matriz[l][c];
            }
            if(c == 1){
                somac1 += matriz[l][c];
            }
            if(c == 2){
                somac2 += matriz[l][c];
            }
        }
    }

// Imprime a matriz
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("{%d} ", matriz[l][c]);
        }
        printf("\n");
    }

// Verifica as linhas e colunas
// printf("soma linha 0: %d\n", somal0);
    linhas[i] = somal0;
    i++;
// printf("soma linha 1: %d\n", somal1);
    linhas[i] = somal1;
    i++;
// printf("soma linha 2: %d\n", somal2);
    linhas[i] = somal2;
    i = 0;

// printf("soma coluna 0: %d\n", somac0);
    colunas[i] = somac0;
    i++;
// printf("soma coluna 1: %d\n", somac1);
    colunas[i] = somac1;
    i++;
// printf("soma coluna 2: %d\n", somac2);
    colunas[i] = somac2;
    i++;
    
    

// Imprime a soma das linhas e colunas 
    for(i = 0; i < 3; i++){
        printf("a soma dos valores da linha %d foi: %d\n", i, linhas[i]);
    }
    for(i = 0; i < 3; i++){
        printf("a soma dos valores da coluna %d foi: %d\n", i, colunas[i]);
    }



}

/* Ex 6
Faça um algoritmo que carregue uma matriz 4x2.Recalcule a matriz digitada,
onde cada linha será multiplicada pelo maior elemento da linha em questão.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int matrizA[4][2], matrizB[4][2], l = 0, c = 0, maior0 = 0, maior1 = 0, maior2 = 0, maior3 = 0;

int main(){
// Cria a matrizA
    for(l = 0; l < 4; l++){
        for(c = 0; c < 2; c++){
            printf("Digite o valor na linha %d da coluna %d na Matriz A: ", l, c);
            scanf("%d", &matrizA[l][c]);
        }
    }

// Descobre o maior numero de cada linha
    for(l = 0; l < 4; l++){
        for(c = 0; c < 2; c++){
            //maior linha 0
            if(l == 0){
                if(matrizA[l][c] > maior0){
                    maior0 = matrizA[l][c];
                }
                else{
                    //pass
                }
            }
        // maior linha 1
            if(l == 1){
                if(matrizA[l][c] > maior1){
                    maior1 = matrizA[l][c];
                }
                else{
                    //pass
                }
            }
        // maior linha 2
            if(l == 2){
                if(matrizA[l][c] > maior2){
                    maior2 = matrizA[l][c];
                }
                else{
                    //pass
                }
            }
        // maior linha 3
            if(l == 3){
                if(matrizA[l][c] > maior3){
                    maior3 = matrizA[l][c];
                }
                else{
                    //pass
                }
            }
        }
    }
// Verifica os Maiores de cada linha
    printf("maior linha 0: %d\n", maior0);
    printf("maior linha 1: %d\n", maior1);
    printf("maior linha 2: %d\n", maior2);
    printf("maior linha 3: %d\n", maior3);

// Cria a Matriz B
    for(l = 0; l < 4; l++){
        for(c = 0; c < 2; c++){
            if(l == 0){
                matrizB[l][c] = matrizA[l][c] * maior0;
            }
            if(l == 1){
                matrizB[l][c] = matrizA[l][c] * maior1;
            }
            if(l == 2){
                matrizB[l][c] = matrizA[l][c] * maior2;
            }
            if(l == 3){
                matrizB[l][c] = matrizA[l][c] * maior3;
            }
        }
    }

// Printa a Matriz B
    for(l = 0; l < 4; l++){
        for(c = 0; c < 2; c++){
            printf("{%d} ", matrizB[l][c]);
        }
        printf("\n");
    }

}
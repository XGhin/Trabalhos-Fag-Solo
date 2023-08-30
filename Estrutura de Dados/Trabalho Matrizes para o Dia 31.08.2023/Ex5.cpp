/* Ex 5
Faça um programa que monte uma matriz 2x4 com números inteiros, calcule e
mostre. A quantidade de elementos entre 12 e 20 em cada linha. A média dos
elementos pares da matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int matriz[2][4], l = 0, c = 0, pares = 0, dentro0 = 0, dentro1 = 0, elementosPares, media = 0;

int main(){
// Cria a matriz
    for(l = 0; l < 2; l++){
        for(c = 0; c < 4; c++){
            printf("Digite o valor na linha %d da coluna %d na Matriz A: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
// Verifica contador de elementos pares
    for(l = 0; l < 2; l++){
        for(c = 0; c < 4; c++){
            if(matriz[l][c]%2 == 0){
                elementosPares += 1;
            }       
        }
    }    
    printf("Quantidade de elementos pares: %d\n", elementosPares);

    //Conta o numero de elementos entre 12 e 20 em cada linha
    for(l = 0; l < 2; l++){
        for(c = 0; c < 4; c++){
            if(l == 0){
                if(matriz[l][c] >= 12 && matriz[l][c] <= 20){
                    dentro0 += 1;
                }
            }
            if(l == 1){
                if(matriz[l][c] >= 12 && matriz[l][c] <= 20){
                    dentro1 += 1;
                }
            }
        }
    }
    
// Descobre a media dos elementos pares da matriz
    for(l = 0; l < 2; l++){
        for(c = 0; c < 4; c++){
            if(matriz[l][c]%2 == 0){
                pares += matriz[l][c];
            }
            else{
                //pass
            }
        }
    }

// Imprime os elementos entre 12 e 20 de cada linha e a media dos elementos pares da matriz
    printf("Existem %d numeros entre 12 e 20 na linha 0\n", dentro0);
    printf("Existem %d numeros entre 12 e 20 na linha 1\n", dentro1);
    printf("A media dos numeros pares da matriz foi: %d\n", media=pares/elementosPares);
}
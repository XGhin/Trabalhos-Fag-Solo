// Ex 4
// Faça um programa que carregue uma matriz 3x4 com números inteiros, calcule
// e mostre a quantidade de elementos entre 15 e 20.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int matriz[4][3], l = 0, c = 0, dentro = 0;

int main(){
// Cria a Matriz A
    for(l = 0; l < 3; l++){
        for(c = 0; c < 4; c++){
            printf("Digite o valor na linha %d da coluna %d na Matriz A: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
// Descobre quantos valores estão entre 15 e 20
    for(l = 0; l < 3; l++){
        for(c = 0; c < 4; c++){
            if(matriz[l][c] >= 15 && matriz[l][c] <= 20){
                dentro += 1;
            }
        }
    }
    printf("O numero de valores entre 15 e 20 foram: %d", dentro);
}
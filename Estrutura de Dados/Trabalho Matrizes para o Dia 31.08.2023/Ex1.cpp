// Ex 1
// Definir um algoritmo que leia 2 vetores com 6 elementos cada. O algoritmo
// deve gerar uma matriz C de 6x2 onde a 1º coluna são valores de A e a 2º
// coluna valores de B

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int A[6], B[6], MatrizC[6][2], l, c;

int main(){
// Cria as variaveis do vetor A 
    for(l = 0; l < 6; l++){
        printf("digite o valor na posicao %d do vetor A: ", l);
        scanf("%d", &A[l]);
    }
    for(l = 0; l < 6; l++){
        printf("{%d} ", A[l]);
    }
    
    printf("\n");
// Cria as variaveis do vetor B
    for(l = 0; l < 6; l++){
        printf("digite o valor na posicao %d do vetor B: ", l);
        scanf("%d", &B[l]);
    }
    for(l = 0; l < 6; l++){
        printf("{%d} ", B[l]);
    }
    printf("\n");

// Criando Matriz C
    for(l = 0; l < 6; l++){
        for(c = 0; c < 2; c++){
            if(c == 0){
                MatrizC[l][c] = A[l];
            }
            if(c == 1){
                MatrizC[l][c] = B[l];
            }
        }
    }

// Imprime Matriz C
    printf("Matriz C:\n");
    for(l = 0; l < 6; l++){
        for(c = 0; c < 2; c++){
            printf("{%d} ", MatrizC[l][c]);
        }
        printf("\n");
    }
}
/*
10 - Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais.
Caso haja escreva na tela quais são e posição que estão. Ex.:
3 : posição 5 e 8 
85: posição 0 e 3
*/

#include <stdio.h>

int A[10] = {5, 3, 8, 5, 18, 23, 3, 7, 9, 10}, iguais[10], i = 0, u = 0;

int main(){
    for(i = 0; i < 10; i++){
        for (u = i + 1; u < 10; u++){
            if(A[i] == A[u]){
                printf("%d: posicao %d e %d\n", A[i], i, u);
            }
        }
    }
}

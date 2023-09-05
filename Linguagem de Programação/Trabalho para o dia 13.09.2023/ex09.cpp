/*
9 - Fazer um programa para ler 5 valores e, em seguida
mostrar na tela as posição onde se encontram o maior e o
menor valor.
*/

#include <stdio.h>

int A[5] = {7, 5, 11, 9, 2}, maior[2] = {0, 0}, menor[2], i = 0;

int main(){
    menor[0] = A[0];

    for(i = 0; i < 5; i++){
        if(A[i] > maior[0]){
            maior[0] = A[i];
            maior[1] = i;
        }
        if(A[i] < menor[0]){
            menor[0] = A[i];
            menor[1] = i;
        }
    }
    
    printf("O maior numero foi %d e esta na posicao %d\n", maior[0], maior[1]);
    printf("O menor numero foi %d e esta na posicao %d\n", menor[0], menor[1]);
}
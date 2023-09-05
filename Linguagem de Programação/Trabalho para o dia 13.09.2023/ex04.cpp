/*
4 - . Faça um algoritmo que leia 20 números e armazene em um vetor. Depois, 
some entre os 10 primeiros elementos deste vetor apenas aqueles que são 
ímpares e apresentar resultado na tela;
*/

#include <stdio.h>

int A[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}, soma_impares = 0, i = 0;

int main(){
    for(i = 0; i < 10; i++){
        if(A[i] % 2 == 1){
            soma_impares += A[i];
        }
    }
    printf("A soma dos impares antes da posicao 10 foi: %d", soma_impares);
}
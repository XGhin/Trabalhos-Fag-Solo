/*
8 – Preencha duas matrizes A e B de 5 valores inteiros.
Armazenar em um vetor C o resultado da soma de cada 
posição entre os vetores A e B.
*/

#include <stdio.h>

int A[5] = {1, 2, 3, 4, 5}, B[5] = {1, 2, 3, 4, 5}, C[5], i = 0;

int main(){
    for(i = 0; i < 5; i++){
        C[i] = A[i] + B[i];
        printf("{%d}", C[i]);
    }
}
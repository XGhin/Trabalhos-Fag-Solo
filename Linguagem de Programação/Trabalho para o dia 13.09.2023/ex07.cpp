/*
7 – Preencha um vetor de 7 números inteiros de tal forma que nenhum valor seja
repetido
*/

#include <stdio.h>

int A[7], i = 0;

int main(){
    A[0] = 5;
        printf("{%d}", A[0]);
    for(i = 1; i < 7; i++){
        A[i] = A[i-1] * 3 / 2;
        printf("{%d}", A[i]);
    }
}
/*
11 - Leia um vetor A com 10 números inteiros. Copie os elementos para um vetor B também
de tamanho 10 eliminando elementos repetidos.

Ex :
A[10] = {3, 45, 2, 67, 3, 9, 11, 12, 0, 31}
B 3, 45 2 67 9 11 12 0 31
*/

#include <stdio.h>

int A[10] = {3, 45, 2, 67, 3, 9, 11, 12, 0, 31}, B[10], i = 0, u = 0;

int main(){
    for(i = 0; i < 10; i++){
        B[i] = A[i];
    }
    for(i = 0; i < 10; i++){
        for(u = i + 1; u < 10; u++){
            if(B[i] == B[u]){
                B[u] = 0;
            }
        }
    }

    for(i = 0; i < 10; i++){
        if(B[i] != 0){
        printf("{%d} ", B[i]);
        }
    }
}

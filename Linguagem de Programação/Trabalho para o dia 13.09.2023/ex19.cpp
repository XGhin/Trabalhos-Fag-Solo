/*
19 - Faça um programa que leia dois vetores A e B de 10 elementos. Crie um vetor C com 10
elementos que seja a intersecção entre os 2 vetores anteriores, ou seja, que contem os
números dos dois vetores. A ordem dos números em C não importa.
*/

#include <stdio.h>
#include <stdlib.h>

int A[10], B[10], C[10], i;

int main(){
// Cria o Vetor A
    for(i = 0; i < 10; i++){
        printf("Digite o valor do vetor A na posicao %d: ", i);
        scanf(" %d", &A[i]);
    }
// Cria o Vetor B
    for(i = 0; i < 10; i++){
        printf("Digite o valor do vetor B na posicao %d: ", i);
        scanf(" %d", &B[i]);
    }

// Cria o Vetor C
    for(i = 0; i < 10; i++){
        if(i%2 == 0){
            C[i] = A[i];
        }
        else{
            C[i] = B[i];
        }
    }

// Printa o Vetor C
    for(i = 0; i < 10; i++){
        printf("[%d]", C[i]);
    }
}
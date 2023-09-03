/*
17 - Faça um programa que preencha automaticamente um vetor de tamanho 10 com os
números naturais que são múltiplos de 7 ou que terminam com 7.
*/

#include <stdio.h>

int A[10], i = 0, m = 0, t = 0;

int main(){
//  Gera os numeros do Vetor A
    do{
        if(m % 7 == 0 || m % 10 == 7){
            A[t] = m;
            t++;
        }
        m++;
    }while(t < 10);
// Printa os numeros do Vetor A
    for(i = 0; i < 10; i++){
        printf("[%d]", A[i]);
    }
}
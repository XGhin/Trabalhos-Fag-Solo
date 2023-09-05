/*
5 - Faça um algoritmo para preencher um vetor com 10 elementos . Após 
o preenchimento inverter a posição destes elementos, de tal modo que o
primeiro elemento venha a ser o último depois da inversão. Imprimir na tela o
resultado final do vetor.
*/

#include <stdio.h>

int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, temp[10], i = 0, u = 9;

int main(){
    printf("Vetor original: ");
    for(i = 0; i < 10; i++){
        printf("{%d}", A[i]);
        temp[i] = A[u];
        u--;
    }

    //Vetor invertido
    printf("\n\nVetor invertido: ");
    for(i = 0; i < 10; i++){
        A[i] = temp[i];
        printf("{%d}", A[i]);
    }
}
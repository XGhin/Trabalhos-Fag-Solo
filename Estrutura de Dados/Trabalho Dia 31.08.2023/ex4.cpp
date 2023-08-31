/*
    Ex 4
*/

#include <stdio.h>

int A[5] = {6, 6, 3, 2, 7}, soma_pares, soma_impares, pares, impares, i;
float media, total, cont;

int main(){
    for(i = 0; i < 5; i++){
        if(A[i]%2 == 0){
            soma_pares += A[i];
            pares += 1;
            total += A[i];
        }
        else{
            soma_impares += A[i];
            impares += 1;
            total += A[i];
        }
    }
    cont = i;
    media = total / cont;
    printf("Media: %.2f\nSoma Pares: %d\nSoma Impares: %d\nQuantidade de Pares: %d\nQuantidade de Impares: %d", media, soma_pares, soma_impares, pares, impares);
}
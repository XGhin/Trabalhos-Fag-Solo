/*
3 - Crie um algoritmo para ler 15 números inteiros e mostrar no final, os que 
forem maiores ou igual a 10;
*/

#include <stdio.h>

int A[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}, i = 0;

int main(){
    printf("Valores maiores ou iguais a 10: ");
    for(i = 0; i < 15; i++){
        if(A[i] >= 10){
            printf("{%d}", A[i]);
        }
    }
}
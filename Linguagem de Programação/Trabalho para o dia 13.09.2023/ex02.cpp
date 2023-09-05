/*
2 - Crie um algoritmo para ler 10 números inteiros e mostrar os números 
pares deste vetor;
*/

#include <stdio.h>

int A[10] = {5, 3, 6, 7, 8, 10, 16, 2, 59, 58}, i = 0;

int main(){
    printf("Valores pares: ");
    for(i = 0; i < 10; i++){
        if(A[i] % 2 == 0){
            printf("{%d}", A[i]);
        }
    }
}
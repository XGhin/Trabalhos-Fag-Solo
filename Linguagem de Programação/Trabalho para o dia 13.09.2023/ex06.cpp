/*
6 - Faça um algoritmo que leia 10 valores do tipo inteiro e armazene-os em 
um vetor. A seguir, o algoritmo deverá informar:
(1) todos os números pares que existem no vetor; 
(2) o menor e o maior valor existente no vetor;
(3) quantos dos valores do vetor são maiores que a média desses valores:
*/

#include <stdio.h>

int A[10] = {5, 3, 15, 12, 16, 19, 22, 4, 18, 2}, pares[10], media = 0, maior, menor, i = 0;

int main(){
    menor = A[0];
    for(i = 0; i < 10; i++){
        if(A[i] % 2 == 0){
            pares[i] = A[i];
        }
        media += A[i];
        if(A[i] < menor){
            menor = A[i];
        }
        if(A[i] > maior){
            maior = A[i];
        }
    }
    
    media = media / i;

    printf("\nOs numeros pares sao: ");
    for(i = 0; i < 10; i++){
        if(pares[i] != 0){
            printf("{%d}", pares[i]);
        }
    }

    printf("\nO maior numero foi: %d\nO menor numero foi: %d", maior, menor);

    printf("\nOs numeros acima da media sao: ");
    for(i = 0; i < 10; i++){
        if(A[i] >= media){
            printf("{%d}", A[i]);
        }
    }
}
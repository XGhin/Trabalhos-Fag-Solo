/*
1 - Ler oito elementos inteiros em uma matriz unidimensional (A). 
Construir uma matriz B de mesma dimensão com os elementos da matriz A 
multiplicados por 3. Após, apresente os números da matriz B. Exemplo: o 
elemento B|0] deve ser implicado pelo elemento A[0)*3, o elemento B[1] deve 
ser implicado pelo elemento A[1]*3 e assim por diante, até a última posição;
*/

#include <stdio.h>

int A[8] = {1, 2, 3, 4, 5, 6, 7, 8}, B[8], i = 0;

int main(){
    for(i = 0; i < 8; i++){
        B[i] = A[i] * 3;
    }
    printf("Matriz Original: ");
    for(i = 0; i < 8; i++){
        printf("{%d}", A[i]);
    }
    printf("\nMatriz B:");
    for(i = 0; i < 8; i++){
        printf("{%d}", B[i]);
    }
}
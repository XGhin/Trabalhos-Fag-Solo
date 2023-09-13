/*
    18 - Leia 10 números inteiros e armazene em um vetor. Em seguida apresente os elementos
    que são primos e suas respectivas posições no vetor.
*/

#include <stdio.h>

int primos[10], A[10], i, p;

int main(){
    for(i = 0; i < 10; i++){
        printf("Digite o numero na posicao %d: ",i);
        scanf("%d", &A[i]);

            if(A[i] <= 0){
                continue;
            }

        for(p = 2; p * p <= A[i]; p++){
            if(A[i]%p == 0){
            break;
            }
        }    
        if(p * p > A[i]){
            primos[i] = A[i];
        } 
        }
    printf("Os numeros primos sao: \n");
    for(i = 0; i < 10; i++){
        if(primos[i] != 0){
            printf("{%d}\n", primos[i]);
        }
    }
}

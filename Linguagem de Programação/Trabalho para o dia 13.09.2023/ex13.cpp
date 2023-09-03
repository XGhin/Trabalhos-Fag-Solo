/*
13 - Faça um programa que leia um vetor de 10 números. Leia um numero inteiro x. Conte os
múltiplos deste numero x presente no vetor e mostre-os na tela.
*/

#include <stdio.h>

int A[10] = {42, 19, 73, 88, 55, 12, 67, 36, 28, 91}, x = 0, i = 0;

int main(){
    printf("Digite qual sera o numero X: ");
    scanf("%d", &x);

    printf("Os numeros multiplos de %d sao:\n", x);
    for(i = 0; i < 10; i++){
        if(A[i]%x == 0){
            printf("{%d} ", A[i]);
        }
        else{
            //pass
        }
    }
}
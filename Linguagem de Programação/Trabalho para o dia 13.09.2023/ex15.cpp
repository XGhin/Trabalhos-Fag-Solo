/*
15 – Preencha um vetor A do tipo inteiro de 5 posições. Em um segundo vetor B do tipo
booleano com 5 posições colocar em cada posição TRUE caso o valor do número do índice
correspondente no vetor A for PAR, caso contrário colocar FALSE;
*/

#include <stdio.h>
#include <stdbool.h>

int A[5] = {2, 5, 7, 8, 9}, i = 0;
bool B[5];

int main(){
    for(i = 0; i < 5; i++){
        if(A[i] % 2 == 0){
            B[i] = true;
        }
        else{
            B[i] = false;
        }
    }

    printf("%d", B[3]);
}
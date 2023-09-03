/*
12 - .Preencha um vetor A de 10 posições e ao final atribua valor 0 para todos os elementos
que possuírem valores negativos.
*/

#include <stdio.h>

float A[10] = {42, -19, 73, -88, 55, 12, 67, 36, -28, 91};
int i = 0;

int main(){
    for(i = 0; i < 10; i++){
        if(A[i] < 0){
            A[i] = 0;
        }
        else{
            //pass
        }
        printf("{%f}", A[i]);
    }
}
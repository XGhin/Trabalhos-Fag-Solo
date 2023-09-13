/*
16 – Preencha 2 vetores A e B de 5 posições cada com números reais. Em um vetor C de 10
posições preencher com valores de A e B intercalados.
*/

#include <stdio.h>

int A[5] = {5, 3, 2, 6, 9}, B[5] = {1, 5, 7, 2, 8}, C[10], i = 0, r = 0, z = 0;


int main(){
    for(i = 0; i < 10; i += 2){
        C[i] = A[r];
        r++;
    }
    
    for(i = 1; i < 10; i += 2){
        C[i] = B[z];
        z++;
    }
    printf("Vetor C: ");
    for(i = 0; i < 10; i++){
        printf("{%d}", C[i]);
    }
}

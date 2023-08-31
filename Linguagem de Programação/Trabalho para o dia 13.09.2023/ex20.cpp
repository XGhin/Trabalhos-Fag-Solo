/*
20 – Preencha um vetor A do tipo caracter com 5 posições. Ao final VARRER o conjunto A e
apresentar quantos elementos são VOGAIS;
*/

#include <stdio.h>
#include <stdlib.h>

int i = 0, vogais;
char A[5];

int main(){
    for(i = 0; i < 5; i++){
        printf("Digite a letra na posicao %d: ", i);
        scanf(" %c", &A[i]);
    }

    for(i = 0; i < 5; i++){
        if(A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u'){
            vogais += 1;
        }
        else{
            //pass
        }
    }
    printf("O numero de vogais foi: %d", vogais);
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int A[15], B[15], C[15], i = 0;
int main(){
    do{
        printf("%d", i);
        printf("Digite o valor da posicao %d no vetor A: ", i);
            scanf("%d", &A[i]);
        printf("Digite o valor da posicao %d no vetor B: ", i);
            scanf("%d", &B[i]);
        i++;
    }while(i < 15);
i = 0;
    do{
        if(i % 2 == 0){
            C[i] = A[i];
            i++;
        }
        else{
            C[i] = B[i];
            i++;
        }
    }while(i < 15);

i = 0;
    do{
        printf("Posicao %d do Vetor C: %d\n", i, C[i]);
        i++;
    }while(i < 15);
}

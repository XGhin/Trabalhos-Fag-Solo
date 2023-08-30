#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i = 0;
char A[30];

int main(){
    do{
        if(i <= 14){
            A[i] = 'V';
            i++;
        }
        else{
            A[i] = 'F';
            i++; 
        }
    }while(i<30);

i = 0;
    do{
        printf("Posicao %d: %c\n", i, A[i]);
        i++;
    }while(i < 30);
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int notas[100], i, soma_pares = 0, soma_impares = 0;

int main(){
    do{
        printf("Qual foi a %d nota: ", i+1);
        scanf("%d", &notas[i]);
        i++;
    }while(i < 100);
    
i=0;
    //soma dos impares e pares
    do{
        if(i % 2 == 0){
            soma_pares += notas[i];
            }
        else{
            soma_impares += notas[i];
            }
        i++;
    }while(i < 100);
    printf("A soma dos impares foi: %d\n", soma_impares);
}

// Xghin viado e homossexual
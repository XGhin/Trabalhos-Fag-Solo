/*
Metodo de Ordenaçao: Seleção Simples
*/

#include <stdio.h>

int A[] = {5, 15, 7, 23, 11, 53}, ord, des, menor, temp;
int n = sizeof(A)/sizeof(A[0]);

int main(){
//  Faz a ordenação
    for(ord = 0; ord < n - 1; ord++){
        menor = ord;
        for(des = ord + 1; des < n; des++){
            if(A[des] < A[menor]){
                menor =  des;
            }
        }
            temp = A[ord];
            A[ord] = A[menor];
            A[menor] = temp;
    }
    printf("Array Ordenado: \n");
    for (ord = 0; ord < n; ord++){
        printf("%d", A[ord]);
    }
}
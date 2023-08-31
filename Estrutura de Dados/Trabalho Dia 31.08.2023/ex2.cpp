/*
    Ex 2
*/

#include <stdio.h>

int l, c, i, menor = 0, B[3][3], A[3][3]{    
    {6, 6, 3},
    {8, 8, 2},
    {3, 3, 4}
};

int main(){
    
    l = 0;
    c = 2;
    for(i = 0; i < 3; i++){
        if(menor < A[l][c]*5){
            menor = A[l][c]*5;
        }
        l++;
        c--;
    }

    l = 0;
    c = 2;
    for(i = 0; i < 3; i++){
        if(menor > A[l][c]){
            menor = A[l][c];
        }
        l++;
        c--;
    }
    
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            B[l][c] = A[l][c]*menor;
        }
    }

    printf("Matriz A\n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("{%d}", A[l][c]);
        }
        printf("\n");
    }
    printf("\nMatriz B\n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("{%d}", B[l][c]);
        }
        printf("\n");
    }

    printf("Menor numero foi: %d", menor);
}
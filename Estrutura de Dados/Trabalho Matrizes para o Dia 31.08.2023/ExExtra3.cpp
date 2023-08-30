/* Ex Extra 3
Crie uma matriz 3x3, descubra o menor numero de cada linha e depois crie uma matriz que seja igual menos o menor numero de cada elemento por linha.
*/

#include <stdio.h>

int matriz[3][3], matrizb[3][3], l, c, menor[3], somal[3];

int main(){
// Cria a matriz
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("Digite o valor na linha %d da coluna %d na Matriz A: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }

// Guarda a soma dos elementos de cada linha

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            somal[l] += matriz[l][c];
            }
            menor[l] = somal[l];
        }

// Guarda o menor elemento de cada linha

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            if(menor[l] > matriz[l][c]){
                menor[l] = matriz[l][c];
            }
        }
    }

// Imprime a Matriz A
    printf("Matriz A: \n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("{%d} ", matriz[l][c]);
        }
        printf("\n");
    }

// Verifica os menores numeros
    for(l = 0; l < 3; l++){
        printf("O menor elemento da linha %d foi: %d\n", l, menor[l]);
    }

// Cria a Matriz B
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            matrizb[l][c] = matriz[l][c] - menor[l];
        }
    }

// Imprime a Matriz B
    printf("Matriz B: \n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("{%d} ", matrizb[l][c]);
        }
        printf("\n");
    }
}
// Ex 2
// O algoritmo para ler todos os elementos de uma matriz 3x3 de reais e depois
// imprimir a soma dos elementos de cada linha, e finalmente a soma total.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int matriza[3][3], l, c, soma1 = 0, soma2 = 0, soma3 = 0, somatotal;

int main(){
// Cria a Matriz A
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("Digite o valor na linha %d da coluna %d na Matriz A: ", l, c);
            scanf("%d", &matriza[l][c]);
        }
    }

// Cria a soma de cada linha
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            if(l == 0){
                soma1 = soma1 + matriza[l][c];
            }
            if(l == 1){
                soma2 = soma2 + matriza[l][c];
            }
            if(l == 2){
                soma3 = soma3 + matriza[l][c];
            }
        }
    }
    somatotal = soma1 + soma2 + soma3;

// Imprime as somas de Cada linha e o total de todas as linhas
    printf("O valor da soma dos elementos da linha 1 foi: %d\n", soma1);
    printf("O valor da soma dos elementos da linha 2 foi: %d\n", soma2);
    printf("O valor da soma dos elementos da linha 3 foi: %d\n", soma3);
    printf("O valor da soma de todos os elementos foi: %d\n", somatotal);
    

}
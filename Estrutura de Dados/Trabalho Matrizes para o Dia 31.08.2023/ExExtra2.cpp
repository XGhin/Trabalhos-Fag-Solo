/* Ex Extra 2
Escreva uma matriz 3x2 que armazene palavras que serao respectivamente em cada linha um nome e um sobrenome. depois imprima os nomes e os sobrenomes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char matriz[3][2][50];
int l, c;

int main(){
// Cria a matriz
    for(l = 0; l < 3; l++){
        for(c = 0; c < 2; c++){
            printf("Digite o valor na linha %d da coluna %d na Matriz A: ", l, c);
            scanf("%s", matriz[l][c]);
        }
    }
    
// Imprime os nomes e sobrenomes
    for (l = 0; l < 3; l++) {
        printf("Nome: %s, Sobrenome: %s\n", matriz[l][0], matriz[l][1]);
    }
}
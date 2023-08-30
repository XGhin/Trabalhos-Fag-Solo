// Ex 3
// Escreva um algoritmo que leia uma matriz 3x4 e calcule a média dos valores
// por linha. Essa média deve ser armazenada em um vetor de 3 linhas.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int matriz[3][4], medias[3], l, c, i = 0, somalinha0, somalinha1, somalinha2, somatotal;
float mediageral = 0;

int main(){
// Cria a Matriz A
    for(l = 0; l < 3; l++){
        i = 0;
        for(c = 0; c < 4; c++){
            printf("Digite o valor na linha %d da coluna %d na Matriz A: ", l, c);
            scanf("%d", &matriz[l][c]);
            i++;
        }
    }
    printf("Quantia de colunas = %d\n", i);

// Tira a media das linhas
    for(l = 0; l < 3; l++){
        for(c = 0; c < 4; c++){
            if(l == 0){
                somalinha0 = somalinha0 + matriz[l][c];
                medias[l] = somalinha0 / i;
            }
            if(l == 1){
                somalinha1 = somalinha1 + matriz[l][c];
                medias[l] = somalinha1 / i;
            }
            if(l == 2){
                somalinha2 = somalinha2 + matriz[l][c];
                medias[l] = somalinha2 / i;
            }
        }
    }

// Calcula media geral
    somatotal = somalinha0 + somalinha1 + somalinha2;
    mediageral = somatotal / (i * 3);
    
// Bagunça pra entender o codigo
    printf("somalinha0 = %d\n", somalinha0);
    printf("somalinha1 = %d\n", somalinha1);
    printf("somalinha2 = %d\n", somalinha2);
    printf("somatotal = %d  i = %d\n", somatotal, i);

// Printa as medias por Linha
    printf("A media da linha 0 foi: %d\n", medias[0]);
    printf("A media da linha 1 foi: %d\n", medias[1]);
    printf("A media da linha 2 foi: %d\n", medias[2]);
    printf("A media geral foi: %.2f\n", mediageral);
}
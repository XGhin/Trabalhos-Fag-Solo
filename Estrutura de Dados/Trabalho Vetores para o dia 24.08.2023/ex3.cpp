#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int codigo[5], i = 0;
float valor[5];
char produto[5][50];

int main(){
    //cadastro de items
    do{
        printf("Digite o nome do %d item: ", i+1);
        scanf("%s", &produto[i]);
        printf("Digite o codigo do %d item: ", i+1);
        scanf("%d", &codigo[i]);
        printf("Digite o valor do %d item: ", i+1);
        scanf("%f", &valor[i]);
        i++;
    }while(i < 5);

i = 0;
    //impre items abaixo de 3 reais
    printf("Itens Abaixo de 3.00 reais\n");
    do{
        if(valor[i] < 3){
            printf("\n");
            printf("Produto: %s \nCodigo: %d \nValor: %.2f\n", produto[i], codigo[i], valor[i]);
            printf("\n");
            i++;
        }
        else{
            i++;
        }
    }while(i < 5);
}
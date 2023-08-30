//Imprime quantos valores sao maiores, menores ou iguais ao 1 valor
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int valores[5], i, maiores, menores, iguais;

int main(){
    i = 0;
    do{
        printf("Digite o %d valor: ", i+1);
        scanf("%d", &valores[i]);
        i++;
    }while(i < 5);

    //Analisando dados
    i = 1;
    do{
        if(valores[i] > valores[0]){
            maiores += 1;
            i++;
        }
        if(valores[i] < valores[0]){
            menores += 1;
            i++;
        }
        if(valores[i] == valores[0]){
            iguais += 1;
            i++;
        }
    }while(i < 5);

    //Imprime a quantia de Maiores, Menores e Iguais ao 1 valor:
    printf("A quantia de valores iguais ao Primeiro valor sao: %d\n", iguais);
    printf("A quantia de valores maiores que o Primeiro valor sao: %d\n", maiores);
    printf("A quantia de valores menores que o Primeiro valor sao: %d\n", menores);
}
//Cadastro de Clientes com Nome Idade e Sexo
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Idade[2], i = 0;
char Nome[2][50], Sexo[2][50];

int main(){
    do{
        printf("Digite o nome do %d cliente: ", i+1);
        scanf("%s", &Nome[i]);
        printf("Digite a Idade do %d cliente: ", i+1);
        scanf("%d", &Idade[i]);
        printf("Digite o Sexo do %d cliente: ", i+1);
        scanf("%s", &Sexo[i]);
        i++;
    }while(i < 2);

    //Printa os Clientes
i = 0;
    do{
        printf("\n");
        printf("Cliente %d:\nNome: %s\nIdade: %d\nSexo: %s", i+1, Nome[i], Idade[i], Sexo[i]);
        printf("\n");
        i++;
    }while(i < 2);
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i;
float diferenca, notas[15], media, soma = 0;
int main(){

i = 0;
    do{
        printf("Digite a nota do %d aluno: ", i+1);
        scanf("%f", &notas[i]);
        i++;
    }while(i < 15);

i = 0;
    do{
        soma += notas[i];
        i++;
    }while(i < 15);
media = soma / i;
i = 0;
printf("A media da turma foi: %.2f\n", media);
    do{
        printf("A diferenca do aluno %d para a media foi de: %.2f\n", i + 1, notas[i] - media);
        i++;
    }while(i < 15);
}
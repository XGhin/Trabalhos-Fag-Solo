//Converte 10 Temperaturas em Graus Farenheit e transforma em Graus Celsius

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i;
float tf[3], tc[3];

int main(){
    //Registrando Temperaturas em Farenheit
    i = 0;
    do{
        printf("Digite a %d temperatura em Farenheit: ", i + 1);
        scanf("%f", &tf[i]);
        i++;
    }while(i < 3);

    //Convertendo para Celsius
    i = 0;
    do{
        tc[i] = (tf[i]-32)*5/9;
        i++;
    }while(i < 3);

    //Imprimindo Conversoes
    i = 0;
    do{
        printf("%.2f Farenheit em Graus Celsius sao: %.2f\n", tf[i], tc[i]);
        i++;
    }while(i < 3);
}
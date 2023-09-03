/*
14 – Preencha um vetor A de 10 elementos com numeros inteiros. Ao final aplicar a seguinte
fórmula e apresentar o resultado na tela : y=(5 * A[3]) + (A[8]-A[1])
*/

#include <stdio.h>
//           0   1   2   3   4   5   6   7   8   9
int A[10] = {42, 19, 73, 88, 55, 12, 67, 36, 28, 91}, y = 0;

int main(){
    y=(5 * A[3]) + (A[8]-A[1]);
    printf("o resultado foi: %d", y);
}


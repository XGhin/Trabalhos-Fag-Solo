/*
    18 - Leia 10 números inteiros e armazene em um vetor. Em seguida apresente os elementos
    que são primos e suas respectivas posições no vetor.
*/

int primos[10], A[10], i;

int main(){
    for(i = 0; i < 10; i++){
        printf("Digite o numero na posicao %d: ",i);
        scanf("%d", &A[i]);
        for(i = 2; i * i <= A[i]; i++){
            if(A[i] <= 0){
                //pass
            }
            else if(A[i]%i == 0){
            //pass
            }
            else{
                primos[i] = A[i];
            } 
        }
    }

    for(i = 0; i < 10; i++){
        printf("{%d}\n", primos[i]);
    }
}
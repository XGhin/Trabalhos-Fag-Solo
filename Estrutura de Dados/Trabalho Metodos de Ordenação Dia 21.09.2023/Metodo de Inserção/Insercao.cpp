#include <stdio.h>

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ord, des, chave;

    // Algoritmo de ordenação por inserção
    for (ord = 1; ord < n; ord++) {
        chave = arr[ord];
        des = ord - 1;

        // Move os elementos de arr[0..i-1] que são maiores que key
        // para uma posição à frente da sua posição atual
        while (des >= 0 && arr[des] > chave) {
            arr[des + 1] = arr[des];
            des = des - 1;
        }
        arr[des + 1] = chave;
    }

    // Imprime o array ordenado
    printf("Array ordenado:\n");
    for (ord = 0; ord < n; ord++)
        printf("%d ", arr[ord]);

    return 0;
}
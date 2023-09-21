#include <stdio.h>

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, key;

    // Algoritmo de ordenação por inserção
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move os elementos de arr[0..i-1] que são maiores que key
        // para uma posição à frente da sua posição atual
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    // Imprime o array ordenado
    printf("Array ordenado:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
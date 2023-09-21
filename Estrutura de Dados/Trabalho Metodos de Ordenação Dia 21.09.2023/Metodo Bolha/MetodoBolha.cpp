#include <stdio.h>

int main() {
    int A[] = {5, 3, 1, 4, 2};
    int n = sizeof(A)/sizeof(A[0]);
    
    // faz a ordenacao
    for (int ord = 0; ord < n-1; ord++) {
        for (int des = 0; des < n-ord-1; des++) {
            if (A[des] > A[des+1]) {
                int temp = A[des];
                A[des] = A[des+1];
                A[des+1] = temp;
            }
        }
    }

    // Imprime a lista ordenada
    printf("Bubble Sort:\n");
    for(int ord = 0; ord < n; ord++) {
        printf("%d ", A[ord]);
    }

    return 0;
}

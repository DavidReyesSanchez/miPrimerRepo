#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int n = 10, * arreglo = (int*)malloc(n*sizeof(int));
    llenarArreglo(arreglo, n);

    printf("Arreglo original:\n");
    imprimirArreglo(arreglo, n);

    printf("Selection sort:\n");
    selectionSort(arreglo, n);
    imprimirArreglo(arreglo, n);

    free(arreglo);
    return 0;
}

void llenarArreglo(int* arreglo, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arreglo[i] = rand() % 100;
    }
}

void imprimirArreglo(int* arreglo, int n) {
    printf("[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("]\n");
}

void selectionSort(int* arreglo, int n) {
    int min, temp;
    for (int i = 0; i < n-1; i++) {
        min = i;
        for (int j = i+1; j < n; j++) {
            if (arreglo[j] < arreglo[min]) {
                min = j;
            }
        }
        temp = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min] = temp;
    }
}








/*Desarrolla en lenguaje C un programa con los algoritmos de ordenamiento: selection
sort, insertion sort y merge sort. Cada uno en una función que reciba como parámetro el arreglo de
números a ordenar. El arreglo de números debe ser dinámico y debe ser llenado con números
aleatorios. Mide el tiempo de ejecución que tarda cada algoritmo en ordenar (No la creación y
liberación de memoria del arreglo, no el llenado de datos aleatorios).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void llenarArreglo(int* arreglo, int n);
void imprimirArreglo(int* arreglo, int n);
void selectionSort(int* arreglo, int n);
void insertionSort(int* arreglo, int n);
void merge(int* arreglo, int inicio, int mitad, int fin);
void mergeSort(int* arreglo, int inicio, int fin);

int main() {
    int n=1000;
    int* arreglo = (int*)malloc(n*sizeof(int));
   

    llenarArreglo(arreglo, n);

    printf("El arreglo sin modificar:\n");
    imprimirArreglo(arreglo, n);
    printf("\n");

    printf("Algoritmo Selection Sort:\n");
    selectionSort(arreglo, n);
    imprimirArreglo(arreglo, n);
    printf("\n");
   

    printf("Algoritmo Insertion Sort:\n");
    insertionSort(arreglo, n);
    imprimirArreglo(arreglo, n);
    printf("\n");
  

    printf("Algoritmo Merge Sort:\n");
    mergeSort(arreglo, 0, n-1);
    imprimirArreglo(arreglo, n);
    printf("\n");
    

return 0;
}

void llenarArreglo(int* arreglo, int n) {
    srand(time(NULL));
    for (int i=0; i<n; i++) {
        arreglo[i] = rand() % 100;
    }
}

void imprimirArreglo(int* arreglo, int n) {
    for (int i=0; i<n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}

void selectionSort(int* arreglo, int n) {
    int valor_min, temporal;
    for (int i=0; i<n-1; i++) {
        valor_min = i;
        for (int j=i+1; j<n; j++) {
            if (arreglo[j] < arreglo[valor_min]) {
                valor_min = j;
            }
        }
    temporal = arreglo[i];
    arreglo[i] = arreglo[valor_min];
    arreglo[valor_min] = temporal;
    }
}

void insertionSort(int* arreglo, int n) {
    int aux, j;
    for (int i=1; i<n; i++) {
        j = i;
        aux = arreglo[i];
    
        while (j>=0 && aux<arreglo[j-1]) {
            arreglo[j] = arreglo[j-1];
            j--;
        }
        arreglo[j] = aux;
    }
}

void merge(int* arreglo, int inicio, int mitad, int fin) {
    int i, j, k;
    int n1 = mitad - inicio + 1;
    int n2 = fin - mitad;
    int izq[n1], der[n2];

    for (i=0; i<n1; i++) {
        izq[i] = arreglo[inicio + i];
    }
    for (j=0; j<n2; j++) {
        der[j] = arreglo[mitad + 1 + j];
    }
    i = 0;
    j = 0;
    k = inicio;
    while (i<n1 && j<n2) {
        if (izq[i] <= der[j]){
            arreglo[k] = izq[i];
            i++;
        } else{
            arreglo[k] = der[j];
            j++;
        }
        k++;
    }
    while (i<n1) {
        arreglo[k] = izq[i];
        i++;
        k++;
    }
    while (j<n2) {
        arreglo[k] = der[j];
        j++;
        k++;
    }
}

void mergeSort(int* arreglo, int inicio, int fin) {
    int medio;

    if (inicio<fin) {
        medio = inicio + (fin-inicio) / 2;
        mergeSort(arreglo, inicio, medio);
        mergeSort(arreglo, medio+1, fin);
        merge(arreglo, inicio, medio, fin);
    }
}


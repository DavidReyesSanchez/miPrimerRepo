/*Hacer una matriz de tipo entera, preguntandole al
usuario el numero de filas y columnas, rellenar la matriz 
y luego mostrarla por pantalla*/

#include<stdio.h>

int main(){
    int a, b, matriz[50][50];

    printf("Digite el numero filas: ");
    scanf("%i",&a);
    printf("\nDigite el numero columnas: ");
    scanf("%i",&b);

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            fflush(stdin);
            printf("\nIntroduzca un numero matriz [%i][%i]: ",i+1,j+1);
            scanf("%i",&matriz[i][j]);
        }
    }

    printf("\n\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf(" %i",matriz[i][j]);            
        }
    printf("\n");    
    }

    return 0;
}
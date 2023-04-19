/*Sumar dos matrices, pidiendo al usuario el numero de columnas y filas
y ademas los elementos de cada matriz, luego mostrar el resultado*/

#include<stdio.h>
void suma(int a[30][30], int b[30][30],int filas,int columnas);

int main(){
  int matriz1[30][30], matriz2[30][30];
  int filas,columnas,i,j;
  
       
  printf("Digite el numero filas para matriz 1: ");
  scanf("%i",&filas);
  printf("Digite el numero de columnas para matriz 2: ");
  scanf("%i",&columnas);

  for ( i = 0; i < filas; i++){
    for (j = 0; j < columnas; j++)
    {
    fflush(stdin);
    printf("\nDigite numeros para matriz 1 [%i][%i]: ",i+1,j+1);
    scanf("%i", &matriz1[i][j]);
    }
  }
  printf("\n\n");

  for ( i = 0; i < filas; i++){
    for (j = 0; j < columnas; j++){
     fflush(stdin);
     printf("Digite numeros para matriz 2 [%i][%i]: ",i+1,j+1);
     scanf("%i", &matriz2[i][j]);
    }
  }
  printf("\n");

    suma(matriz1, matriz2, filas, columnas);

return 0;
}

void suma(int a[30][30], int b[30][30],int filas,int columnas){
  int suma[filas][columnas];
  int i,j;

  for (i = 0; i < filas; i++){
    for (j = 0; j < columnas; j++)
    {
      suma[i][j]= a[i][j]+ b[i][j];
    }
  }

  for (i = 0; i < filas; i++){
    for (j = 0; j < columnas; j++)
    {
      printf("%i ",suma[i][j]);
    }
     printf("\n"); 
  }
 
}
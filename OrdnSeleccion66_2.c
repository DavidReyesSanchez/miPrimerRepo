/*Hacer un array de 10 numeros desordenados, luego
ordenarlos con el ordenamiento por seleccion,
posteiormente pedir un dato a buscar y utilizar la 
busqueda binaria para determinar si existe o no */

#include<stdio.h>

int main(){

 int a[10]={3,2,4,1,6,5,8,7,9,10};
 int i, j, min, aux, temp;

  for ( i = 0; i < 10; i++)
  {
    min = i;
    for (j = i+1; j <= 10; j++)
    {
      if (a[j] < a[min])
      {
        min = j;
      }
     }
     temp = a[j];
     a[j] = a[min];
     a[min] = temp;
 }
   



    return 0;
}
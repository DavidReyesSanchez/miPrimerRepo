/*Hacer un array pidiendo al usuario el numero de los
elementos, y rellenar el array con numeros digitados 
por el teclado, luego pedir al usuario un numero y 
hacer una busqueda secuencial para indicar si ese 
elemento existe o no, tambien su posicion*/

#include<stdio.h>

int main(){
    int a[40];
    int i, dato, elementos;
    char band = 'F';

    printf("Digite el numero de elementos del array: ");
    scanf("%i",&elementos);
    
    for ( i = 0; i < elementos; i++)
    {
    printf("\nDigite un numero entero para la matriz: ");
     fflush(stdin);
     scanf("%i",&a[i]);
    }
    
    printf("\nDigite un numero entero: ");
    scanf("%i",&dato);
    
    i=0;
    while ((band == 'F')&&(i<elementos))
    {
      if (a[i]==dato)
      {
        band = 'V';
      }
    i++;
    }
    
    if (band=='F')
    {
        printf("El numero no se encuentra en el array");
    }
    else if(band=='V'){
        printf("El numero existe, posicion: %i",i-1);
    }
    
    return 0;
}
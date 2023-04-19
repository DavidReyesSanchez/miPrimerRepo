/*Hacer un array de 10 numeros desordenados, luego ordenarlos 
con el metodo burbuja, posteriormente pedir un dato a buscar
y utilizar la busqueda binaria para determinar si
existe o no*/

#include<stdio.h>

int main(){
  int a[10]={2,1,3,5,4,7,6,9,8,10};
  int inferior, superior, mitad, dato, aux;
  char bandera = 'f';

  for ( int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
     if((a[j])>(a[j+1])){
       aux = a[j];
       a[j] = a[j+1];
       a[j+1] = aux;
      }
    }
  }
  for (int i = 0; i < 10; i++)
  {
  printf("%i ",a[i]);
  }
  printf("\n");

  printf("Digite un numero entero: ");
  scanf("%i",&dato);
  
  //Busqueda binaria
  inferior=0;
  superior=10;

  while (inferior<=superior)
  {
    mitad = (inferior+superior)/2;

    if (a[mitad]==dato)
    {
     bandera = 'V';
     break;
    }
      
    if (a[mitad]>dato)
    {
      superior = mitad;
      mitad = (inferior+superior)/2;
    }
      
    if (a[mitad]<dato)
    {
      inferior = mitad;
      mitad = (inferior+superior)/2;
    }
  }

    if (bandera == 'F')
    {
     printf("El numero no existe");
    }
    else if(bandera== 'V'){
      printf("El numero existe, posicion: %i",mitad);
    }
    
return 0;
}
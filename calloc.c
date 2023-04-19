/*Hacer un puntero array de tipo float, pedir el usuario el número de elementos,
luego reservar memoria dinámica con calloc, luego llenar el array, imprimir todos
los elementos, y por ultimo liberar el espacio de memoria dinámica utilizado.    */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
 float *p_array;
 int i, n;

  printf("Digite el numero de elementos: ");
  scanf("%i",&n);

  p_array = calloc(n,sizeof(float));

    if(p_array == NULL)
    {
	 printf("Memoria Insuficiente");
	 return -1; //Intentar recuperar memoria
	}

  
   for ( i = 0; i < n; i++)
   {
     printf("Digite un numero flotante: ");
     scanf("%f",&p_array[i]);
   }

   for ( i = 0; i < n; i++)
   {
     printf("\n%.2f",p_array[i]);
   }
   
   free(p_array);

return 0;
}
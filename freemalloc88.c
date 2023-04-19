/*Reservar memoria para un arreglo de 5 numeros y hacer que el usuario lo rellene, 
luego utilizar realloc para amplificar ese arreglo de 10 numeros y agregar 5 numeros mas y
imprimir el arreglo resultante.   */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int *p_arreglo, *p_arregloTotal, i;

    p_arreglo = malloc(5*sizeof(int));

    for (i = 0; i < 5; i++)
    {
     printf("Digite un numero entero: ");
     scanf("%i",&p_arreglo[i]);
    }

//Ampliando el arreglo a 10 números 
	
    p_arregloTotal = realloc(p_arreglo,10*sizeof(int));
	
    printf("\n\n");
	
//Pidiendo los 5 numeros siguientes
	for(i=5;i<10;i++)
    {
	 printf("%i. Digite un numero: ",i+1);
	 scanf("%i",&p_arregloTotal[i]);
	}

	printf("\n\n\n");

	//Imprimiendo el arreglo resultante de 10 números
	for(i=0;i<10;i++)
    {
	 printf("%i.\n",p_arregloTotal[i]);
	}
	
    
	free(p_arregloTotal);
	
	return 0;
}
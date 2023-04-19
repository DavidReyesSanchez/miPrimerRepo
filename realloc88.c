/*Reservar memoria para un arreglo de 5 numeros , rellenarlo
con numeros digitados por el usuario luego utilizar realloc
para amplificar a 10 numeros y imprimirlos.  */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  	int *p_array,*p_arrayResultante;
	int i;
	p_array = malloc(5*sizeof(int));
	//Pidiendo los primeros 5 n�meros
	for(i=0;i<5;i++){
		printf("%i. Digite un numero: ",i+1);
		scanf("%i",&p_array[i]);
	}
	
	//Ampliando el arreglo a 10 n�meros 
	p_arrayResultante = realloc(p_array,10*sizeof(int));
	printf("\n\n");
	
	//Pidiendo los 5 numeros siguientes
	for(i=5;i<10;i++){
		printf("%i. Digite un numero: ",i+1);
		scanf("%i",&p_arrayResultante[i]);
	}
	printf("\n\n\n");
	//Imprimiendo el arreglo resultante de 10 n�meros
	for(i=0;i<10;i++){
		printf("%i.\n",p_arrayResultante[i]);
	}
	
	free(p_arrayResultante);
	
return 0;
}
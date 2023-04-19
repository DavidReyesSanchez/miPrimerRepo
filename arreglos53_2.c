/*Crear un programa que tenga un arreglo de 100 numeros
aleatorios entre 1 y 1000.
Una vez creado, organizarlo de tal manera que almacene
los numeros pares en un arreglo y los impares en otro*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void copiarPares(int a[], int b[], int tamanio);
void copiarImpares(int a[], int b[], int tamanio);

int main(){
    int arreglo1[100], arregloPares[100], arregloImpares[100];

    printf("El arreglo sin modificar es: ");
    
	srand(time(NULL));
	for(int i=1;i<100;i++){
		arreglo1[i] =rand()% + (1000 + 1);
        printf(" %i",arreglo1[i]);
	}

    printf("\n\nLos numeros pares son: ");
    copiarPares(arreglo1,arregloPares,100);
    
    printf("\n\nLos numeros impares son: ");
    copiarPares(arreglo1,arregloImpares,100);

    return 0;
}
void copiarPares(int a[], int b[], int tamanio){
int i;

for( i=0; i<tamanio; i++){
if (a[i] % 2==0){
    b[i] = a[i];
}
}
for (i = 0; i < tamanio; i++)
{
    printf(" %i",b[i]);
}
}

void copiarImpares(int a[], int b[], int tamanio){
int i;

for( i=0; i<tamanio; i++){
if (a[i]%2 == 1){
    b[i] = a[i];
}
}
for (i = 0; i < tamanio; i++)
{
    printf(" %i",b[i]);
}
}

/*
#include<stdio.h>
#define TAM 100


int main(){
	int i,numero[TAM],pares[TAM],impares[TAM];
	int n;
	
	srand(time(NULL));
	
	for(i=1;i<TAM;i++){
		numero[i] =rand()% + (1000 + 1);
	}
	
	printf("Pares:\n\n");
	for(i=1;i<=TAM;i++){
		if(numero[i]%2==0){
			printf("%i. %i\n",i,numero[i]);
		}
	}
	
	printf("\nImpares:\n\n");
	for(i=1;i<=TAM;i++){
		if(numero[i]%2==1){
			printf("%i. %i\n",i,numero[i]);
		}
	}	
	
	return 0;
}
*/
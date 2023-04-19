/*Copiar el contenido de un arreglo1 de 5 
elementos hacia otro arreglo2*/

#include<stdio.h>
void copiandoArreglo(int uno[], int dos[], int tamanio);

int main(){
   int a[5], b[5];
    
    for (int i = 0; i < 5; i++)
    {
        printf("Digite 1 elemento entero: ");
        scanf("%i",&a[i]);
    }
    printf("\nCopiando el arreglo en b\n");
    copiandoArreglo(a,b,5);

    return 0;
}

void copiandoArreglo(int uno[], int dos[], int tamanio){
int i;

for(i=0; i<tamanio; i++)
{
dos[i] = uno[i];
}

for ( i=0; i<tamanio; i++)
{
printf("%i ",dos[i]);
}
}
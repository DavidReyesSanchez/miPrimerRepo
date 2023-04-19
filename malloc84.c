/*Reservar memoria con malloc para un array de tipo double 
para 1000 numeros y comprobar  si el puntero es valido.
Si el puntero devuelve tipo NULL signfica que no hay 
suficiente memoria.      */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
double *p_array;
int i;

p_array = malloc(1000* sizeof(double));

if (p_array == NULL)
{
    printf("No hay suficiente memoria");
    return -1;
}
else{
    srand(time(NULL));
    for ( i = 0; i < 1000; i++)
    {
        p_array[i] = 1 + rand() % ((1000+1)-1);
        printf("%.1lf ",p_array[i]); 
    }
    
}


return 0;
}
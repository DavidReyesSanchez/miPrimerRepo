/*Hacer una lista de 10 numeros y pedirle al usuario que digite
un numero y atravez de una busqueda secuencial determinar
si el numero existe en la lista o no, ademas de indicar en que 
posicion se encuentra
*/

#include<stdio.h>

int main(){
    int a[10]={8,7,9,1,3,2,5,4,6};
    char band= 'F';
    int i,dato;

    printf("Digite un numero entero: ");
    scanf("%i",&dato);

    i=0;
    while ((band == 'F')&&(i<10))
    {
       if(a[i]== dato){
        band='V';
       }
    i++;   
    }
    if(band == 'F'){
        printf("El numero no se encuentra en el array");
    }
    else if(band == 'V'){
        printf("El numero existe, posicion: %i",i-1);
    }

    return 0;
}
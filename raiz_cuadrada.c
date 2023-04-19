/*ingrese un numero y calcule e imprima su raiz cuadrada.
Si el numero es negativo, imprima el numero y un mensaje que diga
"tiene raiz imaginaria" */

#include <stdio.h>
#include <math.h>

int main(){

   int numero, raiz;

  printf("ingrese un numero");
  scanf("%i", &numero);

raiz = sqrt(numero);

if(raiz > 0){
    printf("La raiz cuadrada es %i",raiz);
              }
else if(raiz < 0){
   printf("La raiz cuadrada es %i, por lo tanto es imaginaria",raiz);
       }
     
    return 0;
}
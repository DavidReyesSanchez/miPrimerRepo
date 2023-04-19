/*Determinar si numero es primo o no, con punteros y ademas 
indicar en que posicion de memoria se guardo el numero.   */

#include<stdio.h>

int main(){
   int numero, *p_numero;

   p_numero = &numero;

   if ((*p_numero%2)==0)
   {
    printf("El numero %i es primo",*p_numero);
    printf("Su posicion de memoria es %p",p_numero);
   }
   else{
      printf("El numero es impar");
   }


return 0;
}
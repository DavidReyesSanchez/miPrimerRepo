//Suma de n primeros numeros

#include<stdio.h>

int main(){

  int numero,conteo, suma=0;
  conteo = 1;

   printf("Digite un numero para saber la suma de sus primeros numeros:");
   scanf("%i",&numero);
   
   while (conteo <= numero)
   {
    suma += conteo;
    conteo ++;
   }
   printf("\nLa suma de los primeros numeros es %i", suma);

    return 0;
}
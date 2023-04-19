//sumar 1-2+3-4...n

#include<stdio.h>

int main(){

 int i, num, suma=0, suma_pares=0, suma_impares=0, negativo;

   printf("Digite un numero:");
   scanf("%i",&num);

   i = 1;

   while (i <= num)
   {
    if(i % 2 ==0){
     negativo =i*(-1);
     suma_pares += negativo;
                 }
      else{
      suma_impares += i;   
          }
   i++; 
   }
       suma = suma_pares + suma_impares;
       printf("La suma total es %i", suma);

    return 0;
}
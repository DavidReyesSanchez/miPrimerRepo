//Determinar si un numero es primo o no.

#include<stdio.h>

int main(){

   int num, i, cont=0;

   printf("Digite un numero: ");
   scanf("%i",&num);

  for ( i=1; i<=num ; i++){
   if (num%i==0){
    cont++;
   }
  }
   if(cont>2){
     printf("El numero no es primo");
     }
      else{
      printf("El numero es primo!");
      }
  
    return 0;
}
#include<stdio.h>

int main(){

    int i, num, j, blanco;
   
   printf("Programa que hace  dibuja un arbol!!");
   printf("\nCuantas filas quieres que tenga:");
   scanf("%i",&num);

      for (i=1; i<=num; i++){
        for (blanco=num-i; blanco>=1; blanco--){
        printf(" ");
        }
         for (j=1; j<=i; j++){
         printf("* ");
         }
         
       printf("\n");
                            }  
  return 0;    
}
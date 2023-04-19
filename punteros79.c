/*Rellenar un array de 10 numeros, posteriormente utilizar 
punteros, indicar cuales son numeros pares y su posicion 
en memoria.    */

#include<stdio.h>

int main(){
  int n[10], *p_n;
 

  p_n = n;

  for (int i = 0; i < 10; i++)
  {
    fflush(stdin);
    printf("Digite un numero entero: ");
    scanf("%i",&n[i]);
  }  

   for (int i = 0; i < 10; i++)
   {
    if(*p_n%2==0){
      printf("\nEl numero %i es par",*p_n);
      printf("\tY su posicion es %p",p_n);
    }
    else{
        printf("\n\nEl numero %i no es par", *p_n);
    }
    p_n++;
   }
  
  


return 0;
}
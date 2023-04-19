//Hacer un arbol con '*'.  el numero de filas lo dicta el usuario

#include<stdio.h>

int main(){

  int i, filas, asterisco, blanco;
   
  printf("Programa que dibuja un arbol!");
  printf("\nColoca cuantas filas quieres que tenga:");
  scanf("%i",&filas);

    for (i=1; i<=filas; i++){
      for (blanco=filas-i; blanco>=1; blanco--){
      printf(" ");//espacio
      }
        for (asterisco=1; asterisco<=i; asterisco++){
        printf("* ");//atencion en el espacio
        }
         
      printf("\n");
    }  
  return 0;    
}
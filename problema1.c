/*Realizar un programa en c que pida al usuario una cadena, 
calcula el tamano de la cadena e indica si la frase es 
un palindromo.   */

#include<stdio.h>
#include<string.h>

int main(){
  char cadena[20];
  int longitud, fin, inicio=0;

  printf("Digite una cadena: ");
  gets(cadena);

  longitud=strlen(cadena);

    for(fin=longitud-1; cadena[fin]==cadena[inicio] && fin>=0; inicio++,fin--);

    if(inicio==longitud){
        printf("\nEs un palindromo");
      }else{
        printf ("\nNo es palindromo");
    } 




return 0;
}
/*Dada una nota de un examen mediante un codigo escribir el
literal que le corresponde a la nota
A = Exelente
B = Notable
C = Aprobado
D y F = Reprobado   .*/

#include<stdio.h>

int main(){

   char nota;

   printf("Introduzca su nota:");
   scanf("%c",&nota);

   switch (nota){
   case 'A': printf("Exelente"); break;
   case 'B': printf("Notable"); break; 
   case 'C': printf("Aprobado"); break;
   case 'D': 
   case 'f': printf("Reprobado"); break;
   default: printf("Nota no reconocida");break;
 }

    return 0;
}
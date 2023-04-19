/*Hacer un menu que considere las siguientes opciones:
 caso 1: Cubo de un número.
 caso 2: Número par o impar.
 caso 3: Salir
*/

#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

 int opcion, cubo,numero;

    printf("Bienvenido al menu!!");
    printf("\nSi desea saber el cubo de un numero, oprima 1");
    printf("\nSi desea saber si un numero es par o impar, oprima 2");
    printf("\nOprima 3 para salir del programa");  
    printf("\nElija la opcion:");
    scanf("%i", &opcion);
    

  switch (opcion){
  case 1:printf("\nDigite un numero cualquiera:");
         scanf("%i",&numero);
    
         cubo = pow(numero, 3); 
         printf("\nEl cubo del numero es %i", cubo);break;

  case 2:printf("\nDigite un numero cualquiera:");
         scanf("%i",&numero);
         if ((numero % 2)==0){ 
         printf("\nEl numero es par!");
           } 
          else{
          printf("\nEs impar");
              }; break;
  case 3: printf("\nSalio del programa"); break;     
  default: printf("\nOpcion incorrecta");break;
  }

    return 0;
}


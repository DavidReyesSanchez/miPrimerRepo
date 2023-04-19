//Hacer un programa que borre la pantalla al pulsar 1

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char numero;
  
  printf("Programa de borrado de pantalla!");
  printf("\n---------------------\n");
  printf("\n---------------------\n");
  printf("\nDigite el numero 1:\t");
  scanf("%c", &numero);
  fflush(stdin);
  
  if(numero == '1'){
    system("cls");
  }
  else{
    printf("El programa no funciona");
    printf("\nIntentelo de nuevo, presione la tecla 1:");
    scanf("%c",&numero);

    if(numero == '1'){
    system("cls");
    }
    else{
    printf("\nNo funciono");
        }             
  }

    return 0;
}
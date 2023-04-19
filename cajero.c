//Hacer un programa que simule un cajero automatico con saldo inicial de 1000 dolares

#include <stdio.h>

int main(){
  int saldo, retiro, deposito;

  printf("Bienvenido a su cajero automatico!!");
  printf("\nPresione 1 si desea conocer su saldo inicial");
  printf("\nPresione 2 si desea hacer un retiro");
  printf("\nPresione 3 si desea hacer un deposito");
  printf("\nSeleccione una opcion:");
  scanf("%i",&saldo);
  fflush(stdin);
  
switch (saldo){
case 1: printf("\nSu saldo inical es de 1000 dolares");break;
case 2: printf("\nIngrese la cantidad que desea retirar:"); 
        scanf("%i",&retiro);
        fflush(stdin);
        printf("\nSu retiro de %i ha sido exitoso",retiro); break;
case 3: printf("Ingrese la cantidad que desea depositar:");
        scanf("%i",&deposito);
        printf("\nSu deposito de %i ha sido exitoso",deposito);

default:printf("Opcion incorrecta, por favor vuelva a intentarlo");break;
}  

    return 0;
}
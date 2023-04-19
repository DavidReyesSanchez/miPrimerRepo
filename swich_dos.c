/*Selecccionar un tipo de vehiculo e indicar el peaje a pagar segun
un valor numerico.
1-turismo, peaje=500
2-autobuses, peaje=3000
3-motocicleta, peaje=300
caso contrario, vehiculo no autorizado*/

#include <stdio.h>


int main(){

char vehiculo;

printf("Programa que indica el peaje a pagar segun su vehiculo.");
printf("\nPresione 1 si su vehiculo es de turismo.");
printf("\nPresione 2 si su vehiculo es un autobus.");
printf("\nPresione 3 si su vehiculo es una motocicleta.\n");
printf("Seleccione su tipo de vehiculo:");
scanf("%c",&vehiculo);

switch (vehiculo){
case '1': printf("\nSu peaje a pagar es de 500");break;
case '2': printf("\nSu peaje a pagar es de 3000");break;    
case '3': printf("\nSu peaje a pagar es de 300");break;  
default:printf("\nVehiculo no autorizado");break;
   }

    return 0;
}
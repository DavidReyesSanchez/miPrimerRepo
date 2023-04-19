//Comprobar si el numero digitado por el usuario es positivo o negativo

#include <stdio.h>

int main(){
  
  int numero;

printf("Digite un numero cualquiera:");
scanf("%i", &numero);

if(numero > 0){
    printf("El numero es positivo");
              }
else{
    printf("El numero es negativo");
    }
    return 0;
}
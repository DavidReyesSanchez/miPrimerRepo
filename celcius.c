#include <stdio.h>
//Convertir grados Celcius a Farenheit
int main(){

  float gradosC, gradosF;

  printf("introduce los grados celcius:");
  scanf("%f",&gradosC);

  gradosF = (gradosC * 1.8) + 32;

  printf("Los grados en Farenheit son: %.1f",gradosF);


    return 0;
}
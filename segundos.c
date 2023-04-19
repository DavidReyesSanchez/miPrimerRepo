/*Calcular la cantidad de segundos que hay en las horas, minutos
y segundos ingresados por el usuario*/

#include <stdio.h>

int main(){
    int horas, minutos, segundos, segundosT;

    printf("ingresa las horas:");
    scanf("%i", &horas);
    printf("ingresa los minutos:");
    scanf("%i", &minutos);
    printf("ingresa los segundos:");
    scanf("%i", &segundos);

 segundosT = (horas * 3600) + (minutos * 60) + segundos;

  printf("Los segundos totales son %i", segundosT);

    return 0;
}
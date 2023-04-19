#include <stdio.h>
int main(){
     float examen1, examen2, promedio;

     printf("Ingresa la calificacion del 1 examen:");
     scanf("%f", &examen1);
     
     printf("Ingresa la calificacion del 2 examen:");
     scanf("%f", &examen2);
   
     promedio = (examen1 + examen2)/2;

    printf("Tu promedio es %.2f",promedio);
    return 0;
}
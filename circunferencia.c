#include <stdio.h>
#include <math.h>
#define PI 3.1416

//Calcular la longitud de una circunferencia y el area

int main(){
     
     float radio, area, perimetro;

    printf("Escribe el valor del radio:");
    scanf("%f",&radio);
    
    area = PI * pow(radio,2);

    perimetro = 2 * PI * radio;
    
    printf("El area de la circunferencia es %f y el perimetro es %f",area,perimetro);

    return 0;
}
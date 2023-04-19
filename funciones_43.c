/*Hacer un programa que pida por pantalla una temperatura en grados celcius.
Muestre un menu para convertirlos a fehrenheit o kelvin y muestre el equivalente por
pantalla, utilizar funciones 
Celcius a Fehrenheit: F=(9*C)/5+32
Celcius a Kelvin" K= C+273.15
*/

#include<stdio.h>
float fahrenheit(float c);
float kelvin(float c);

int main(){
    float c, k=0, f=0;
    int opc;

      printf("Introduzca la temperatura en grados celcius: ");
      scanf("%i",&c);

      do
      {
         printf("\nPresione segun a que grados desea convertir!\n");
         printf("1.Convertir a grados fahrenheit\n");
         printf("2.Convertir a grados Kelvin\n");
         printf("3.Para salir\n");
         printf("Opcion: \n");
         scanf("%i", &opc);

         switch (opc)
         {
         case 1:  f = fahrenheit(c);
            printf("\nEl equivalente en grados Fahrenheit es %.2f\n",f); break;
         case 2:k = kelvin(c);
            printf("\nEl equivalente en grados Kelvin es %.2f\n",k);break;
         }

      } while (opc != 3);
         
return 0;
}

float fahrenheit(float c){
  float f=0;
  
  f=(9 * c) / 5 + 32;
       
 return f;
}

float kelvin(float c){
  float k=0;
  
  k= c + 273.15;
       
 return k;
}
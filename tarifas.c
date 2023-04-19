/*Visualizar la tarifa de la luz segun el gasto de la corriente electrica
para un gasto menor de 1000 Kwxh la tarifa es de 1.2
para un gasto entre 1.000Kwxh - 1.850Kwxh, la tarifa es de 1.0
y para un gasto mayor de 1.850, la tarifa es de 0.9*/

#include <stdio.h>

int main(){
  
  float gastoT;

  printf("Ingrese su gasto de corriente electrica:");
  scanf("%f", &gastoT);

  if(gastoT < 1000)
                {
    puts("Su tarifa es de 1.2");
                }

  if(gastoT > 1000 && gastoT < 1850)
                 {
    puts("Su tarifa es de 1.0");
                 }
   
   if(gastoT > 1850){
    puts("Su tarifa es de 0.9");
                   }              

    return 0;
}
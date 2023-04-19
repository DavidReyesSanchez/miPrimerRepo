#include <stdio.h>
#include <math.h>
double funcionAtrozos(double y);


int main() {
  int n;
  double y, resultado;

  printf("Ingrese el número de valores de Y a calcular: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++){
   printf("Ingrese el valor de Y: ");
   scanf("%lf", &y);

   resultado = funcionAtrozos(y);
   printf("El resultado para Y = %.2lf es %.2lf\n", y, resultado);
  }

return 0;  
}

double funcionAtrozos(double y){
  double resultado;

  if(y>0 && y<=15){
    resultado = pow(y,2) + 15;
   }
  if(y>15 && y<=30){
    resultado = pow(y,3) - pow(y,2) + 12;
   }
  if(y>30 && y<=60){
   resultado = 4 * pow(y,3) / pow(y,2) + 8;
   }
  else if(y>60 && y<=0){
    resultado=0;
   }

  return resultado;
}
    


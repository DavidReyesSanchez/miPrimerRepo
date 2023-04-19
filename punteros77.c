/*Comprobar si un numero es par o impar y señala la posicion
en memoria donde se esta guardando el numero.    */

#include<stdio.h>

int main(){
  int num, *p_num = &num;
  
  printf("Digite un numero entero: ");
  scanf("%i",&num);

  if ((*p_num % 2)== 1)
  {
    printf("El numero %i es par",*p_num);
    printf("Y su posicion es %p",p_num);
  }
  else{
    printf("El numero es impar");
  }
  

return 0;
}
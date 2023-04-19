/*Calcular el nuevo salario de un obrero si tuvo un incremento
del 25% sobre su salario anterior */

#include <stdio.h>

int main(){
     
     float salarioAnt, incremento = 0.25, salarioN;

  printf("ingrese su salario:");
  scanf("%f", &salarioAnt);

    salarioN = (salarioAnt * incremento)+salarioAnt;

printf("Su nuevo salario es %f", salarioN);
    return 0;

}
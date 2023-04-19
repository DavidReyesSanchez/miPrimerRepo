//Programa que realize la media arimetica de dos numeros con funcion

#include<stdio.h>
int media(int num1, int num2);

int main(){
    int num1, num2, promedio;

      printf("Digite dos numeros: ");
      scanf("%i %i",num1,num2);

      promedio = media(num1,num2);
      
      printf("La media es %i",promedio);

    return 0;

int media(int num1, int num2){
   
  (num1 + num2)/2;

  return 0;
}

}
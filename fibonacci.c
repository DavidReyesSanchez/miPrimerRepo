#include<stdio.h>
long fibonacci (long x);

int main(){
    long numero, resultado;

   printf("Introduzca un entero: ");
   scanf("%ld",&numero);
      
      resultado= fibonacci(numero);
      printf("fibonacci (%ld) = %ld",numero, resultado);

    return 0;
}

long fibonacci(long x){
     if (x == 1 || x ==0)
     {
       return x;
     }
     else{
        return (fibonacci(x-1)+fibonacci(x-2));
     }
}
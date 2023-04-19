#include<stdio.h>

int main(){
      int n;
      float multiplicacion=1, division;

      printf("Digite un numero: ");
      scanf("%i",&n);

        for (int i=1; i <= 2*n; i=i+2)
        {
          division = (i+1)/i; // = (1/i) / (1/(i+1))
          multiplicacion *= division;
        }
       
       printf("El resultado es %.2f ", multiplicacion);




    return 0;
}
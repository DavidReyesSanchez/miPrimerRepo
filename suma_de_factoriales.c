//Suma de factoriales

#include<stdio.h>
#include<math.h>

int main(){
    
    int i, num1, num2, factorial1=1, factorial2=1, suma=0;

      printf("Digite un numero: ");
      scanf("%i",&num1);
      printf("Digite otro numero: ");
      scanf("%i",&num2);

        for (i = 1; i<=num1; i++)
        {
          factorial1*= i;
        }

        for (i = 1; i<=num2; i++)
        {
          factorial2*= i;
        }

      suma= factorial1 + factorial2;
      printf("\nLa suma de los factoriales es %i", suma);

    return 0;
}
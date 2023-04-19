#include <stdio.h>
//calcular la media aritmetica de 3 numeros cualquiera

int main(){
   int uno, dos, tres, suma;
   
   printf("Digite 3 numeros cualquiera");
   scanf("%i %i %i",&uno, &dos, &tres);

   suma = (uno + dos + tres)/3;
   
   printf("La media aritmetica es %i",suma);

    return 0;
}
//sumar pares desde m hasta n

#include<stdio.h>

int main(){

  int m, n, i, suma=0;

  printf("Digite un numero:");
  scanf("%i",&m);
  fflush(stdin);
  printf("\nDigite otro numero:");
  scanf("%i",&n);
  
  i = m;

  while (i<=n)
  {
    if(i % 2==0){
    suma += i;
    }
   i++;
  }
  printf("%i\n",suma); 



    return 0;
}
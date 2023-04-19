/*4. Pedir al usuario el numero de elementos para un array 
de numeros enteros, posteriormente comprobar con malloc si
hay memoria suficiente (si el puntero es valido, es decir 
diferente de NULL), si la hay es entonces rellenar ese array
con numeros aleatorios, si no la hay decir que hay un 
error en la asignacion de memoria.       */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int *p_array, n, i;

  printf("Cuantos elementos quieres ");
  scanf("%i",&n);

  p_array = malloc(n*sizeof(int));

  if (!(p_array == NULL))
  {
    srand(time(NULL));
    for ( i = 0; i < n; i++)
    {
        p_array[i]= rand() % (n);
        printf("%i ",p_array[i]);
    }
  }
  else{
    printf("Hay un error en la asignacion de memoria");
  }
  
return 0;
}

//Multiplos de 3, de 1 hasta n

#include<stdio.h>

int main(){

   int i, mult=1, num;

   printf("Digite un numero:");
   scanf("%i",&num);

   i = 1;
 
 while (i <= num)
 {
   if(i % 3 ==0){
      printf("%i\n",i);
               }
  i++; 
 }


  return 0;
}
 
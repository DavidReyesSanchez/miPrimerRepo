/*Hacer un programa que muestre 3 numeros ordenados de manera ascendente,
utilizar un procedimiento para cada operacion*/ 

#include<stdio.h>
void ascendente(int num1,int num2,int num3);

int main(){
    int num1, num2, num3;
      

      printf("Digite tres numeros cualquiera ");
      scanf("%i %i %i",&num1,&num2,&num3);
    
      ascendente(num1,num2,num3);

    return 0;
}

void ascendente(int num1,int num2,int num3){
    
    if (num1>=num2 && num1>=num3)
    {
       if (num2 >= num3)
       {
        printf("%i %i %i",num3,num2,num1);
       }
       else{
        printf("%i %i %i",num2,num3,num1);
        }
    }

    if (num2>=num1 && num2>=num3)
    {
       if (num1 >= num3)
        {
         printf("%i %i %i",num3,num1,num2);
        }  
       else 
        {
         printf("%i %i %i",num1,num3,num2);
        }
    }

    if (num3>=num1 && num3>=num2)
    {
       if (num1 >= num2)
        {
         printf("%i %i %i",num2,num1,num3);
        }  
       else 
        {
         printf("%i %i %i",num1,num2,num3);
        }
    }
}
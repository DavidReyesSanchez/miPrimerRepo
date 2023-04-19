/*Considerar un funcion que reciba un numero n e imprime los 
numeros de n a 1 con recursividad */

#include<stdio.h>
int serie(int x);

int main(){
    int n;

     printf("Digite un numero: ");
     scanf("%i",&n);

     for (int i = n; i > 0; i--)
     {
        printf("\n%i", serie(i));
     }
     

    return 0;
}

int serie(int x){
if (x<=1)
{
    return 1;
}
else{
    return (serie(x-1)+1);
}


}
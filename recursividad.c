#include<stdio.h>
long factorial(int n);

int main(){
    int numero;

    printf("Digite un numero: ");
    scanf("%i",&numero);
    
    printf("\nEL factorial es %li",factorial(numero));

    return 0;
}

long factorial(int n){
 if (n<=1)
 {
    return 1;
 }
 else{
    return(n * factorial(n-1));
 }
 
}
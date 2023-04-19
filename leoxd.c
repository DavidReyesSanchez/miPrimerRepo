/*Verifica si un numero es divisible entre 5 y tambien entre 1.*/
#include <stdio.h>

int main(int argc, char **argv)
{
    int a;
    scanf("%d", &a);
    if(a % 5 == 0)
        if(a % 1 == 0)
            printf("El numero es divisivle entre 5 y 1\n");
    else
        printf("El numero no es divisible entre 5");
}
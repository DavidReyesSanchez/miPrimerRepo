/*Hacer un programa que lee un arreglo de una estructura los
datos de n empleados de la empresa y que imprima los datos 
del empleado con mayor y menor salario. */

#include<stdio.h>

struct empresa
{
    char nombre[20];
    int edad;
    char sexo[10];
    float salario;
    }empleados[30];

 int main(){
 int i, n, pos, pos2;
 float mayorSalario = 0.0;
 float menorSalario = 0.0;

 printf("Digite el numero de empleados de la empresa: ");
 scanf("%i",&n);
 
 for ( i = 0; i < n; i++)
 {
     fflush(stdin);
     printf("%i.Digite el nombre del empleado: ",i+1);
     gets(empleados[i].nombre);
     printf("%i.Digite la edad: ",i+1);
     scanf("%i",&empleados[i].edad);
     printf("%i.Digite el sexo del empleado: ",i+1);
     gets(empleados[i].sexo);
     printf("%i.Digite el salario del empleado: ",i+1);
     scanf("%f",&empleados[i].salario);
 }
 
 for ( i = 0; i < n; i++)
 {
    if (empleados[i].salario>mayorSalario)
    {
        mayorSalario= empleados[i].salario;
        pos = i;
    }
 }
 for (int j = 0; j < n; j++)
 {
    if (empleados[j].salario<menorSalario)
    {
        menorSalario = empleados[j].salario;
        pos2 = j;
    }
 }

    printf("\nEl empleado con el mejor salario es: \n");
	printf("\nNombre: %s",empleados[pos].nombre);
	printf("\nEdad: %i",empleados[pos].edad);
    printf("\nSexo: %s", empleados[pos].sexo);
	printf("\nPromedio: %.2f\n\n",empleados[pos].salario);

    printf("\nEl empleado con el peor salario es: \n");
	printf("\nNombre: %s",empleados[pos2].nombre);
	printf("\nEdad: %i",empleados[pos2].edad);
    printf("\nSexo: %s", empleados[pos2].sexo);
	printf("\nPromedio: %.2f\n\n",empleados[pos2].salario);
return 0;
}
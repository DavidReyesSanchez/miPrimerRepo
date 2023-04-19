/*Hacer un programa que lea en un arreglo el sexo de los
los n estudiantes del curso y que determine cuantos hombres
y mujeres hay, suponiendo que los datos son extraidos alumno 
por alumno*/

#include<stdio.h>
#include<string.h>

int main(){
    char alumnos[30];
    int total, hombre=0, mujer=0;

    printf("Ingrese el total de los alumnos: ");
    scanf("%i",&total);
    
    for (int i = 1; i <=total; i++)
    {
        fflush(stdin);
        printf("\nDigite el sexo del alumno %i: ",i);
        gets(alumnos);
    
    if (strcmp(alumnos,"masculino")==0)
    {
        ++hombre;
    }
    else if (strcmp(alumnos,"femenino")==0)
    {
        ++mujer;
    }
    }
    printf("\nEl total de hombres es: %i",hombre);
    printf("\nEl total de mujeres es: %i",mujer);
    

    return 0;
}
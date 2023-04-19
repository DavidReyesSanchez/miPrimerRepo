/*Utilizar las 2 estructuras del problema anterior(74),
pero ahora pedir los datos para N alumnos, y calcular cual 
de todos tiene el mejor promedio, e imprimir sus datos.   */

#include<stdio.h>

struct promedio
{
    int nota1;
    int nota2;
    int nota3;
};

struct alumno
{
   char nombre[20];
   char sexo[10];
   int edad;
   struct promedio prom;
}alumno[100];

int main(){
  int i,promedio[100],n;
  int mayor, aux;

   printf("Digite el numero de alumnos: ");
   scanf("%i",&n);

   for ( i = 0; i < n; i++)
   {
     fflush(stdin);
     printf("%i.Digite el nombre del alumno: ",i+1);
     gets(alumno[i].nombre);
     printf("%i.Digite el sexo del alumno: ",i+1);
     gets(alumno[i].sexo);
     printf("%i.Digite la edad: ",i+1);
     scanf("%i",&alumno[i].edad);
     printf("%i.Digite las tres notas: ",i+1);
     scanf("%i %i %i",&alumno[i].prom.nota1, &alumno[i].prom.nota2, &alumno[i].prom.nota3);

     promedio[i] = (alumno[i].prom.nota1 + alumno[i].prom.nota2 + alumno[i].prom.nota3)/3;

      if (promedio[i] > mayor)
      {
         mayor = promedio[i];
         aux = i;
      }
   }
  
  printf("\n\nAlumno con el mejor promedio!!\n");
  printf("Nombre: %s",alumno[aux].nombre);
  printf("Sexo: %s",alumno[aux].sexo);
  printf("Edad: %i",alumno[aux].edad);
  printf("Promedio: %i",promedio[aux]);


return 0;
}
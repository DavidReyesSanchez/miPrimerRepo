/*5. Hacer 2 estructuras una llamada promedio que tendra los 
siguientes miembros: nota1,nota2,nota3; y otro llamada alumno 
que tendra los siguientes miembros:nombre, sexo, edad; hacer que
la estructura promedio este anidada en la estructura alumno, 
luego pedir todos los datos para un alumno, luego calcular
su promedio, y por ultimo imprimir todos sus datos incluidos
el promedio.   */

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
}estudiante1;


int main(){
int i, promedio;

    printf("Digite la nota 1: ");
    scanf("%i",&estudiante1.prom.nota1);
    printf("Digite la nota 2: ");
    scanf("%i",&estudiante1.prom.nota2);
    printf("Digite la nota 3: ");
    scanf("%i",&estudiante1.prom.nota3);

    promedio = (estudiante1.prom.nota1+estudiante1.prom.nota2+estudiante1.prom.nota3)/3;
   
    printf("Digite el nombre: ");
    gets(estudiante1.nombre);
    printf("Digite el sexo: ");
    gets(estudiante1.sexo);
    printf("Digite la edad: ");
    scanf("%i",&estudiante1.edad);


    printf("\n\nLos datos y promedio del alumno!!\n");
    printf("Nombre: %s",estudiante1.nombre);
    printf("Sexo: %s",estudiante1.sexo);
    printf("Edad: %i",estudiante1.edad);
    printf("Promedio: %i",promedio);

return 0;
}
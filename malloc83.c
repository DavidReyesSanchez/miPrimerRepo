/*Pedir una cadena de caracteres al usuario, posteriormente
utilizar malloc para reservar memoria para esa cadena de
caracteres(string).   */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//strlen(variable) = Calcula el tamaño de una cadena
//strcpy(variable,"nombre")= guardaa nombre en la variable

int main(){
  char nombre[20], *p_nombre;
  int longitud;

  printf("Digite su nombre: ");
  gets(nombre);
  
  longitud = strlen(nombre);//"strlen":Cuenta el numeros de caracteres

  p_nombre = malloc((longitud+1)*sizeof(char));
  
  strcpy(p_nombre,nombre);
  
  printf("%s",p_nombre);

return 0;
}
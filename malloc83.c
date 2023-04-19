/*Pedir una cadena de caracteres al usuario, posteriormente utilizar malloc para
reservar memoria para esa cadena de caracteres (string)*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
   char cadena[50], *p_cadena;
   int longitud;

    printf("Digite una cadena: ");
    gets(cadena);

    longitud = strlen(cadena);

    p_cadena = malloc((longitud+1)*sizeof(char));

    strcpy(p_cadena,cadena);

    printf("String: %s",p_cadena);

return 0;
}
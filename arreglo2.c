/* Figura 6.7: fig06_07.c
Programa de respuestas de examen */
 #include <stdio.h>
#define TAMANIO_RESPUESTA 40 /* define los tamaños de los arreglos */
#define TAMANIO_FRECUENCIA 11

int main(){ 
   int respuesta; 
   int rango; 
   int frecuencia[ TAMANIO_FRECUENCIA ] = { 0 };
   int respuestas[ TAMANIO_RESPUESTA ] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
   1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
   5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

   
    for ( respuesta = 0; respuesta < TAMANIO_RESPUESTA; respuesta++ ) {
    ++frecuencia[ respuestas [ respuesta ] ];
    } 
   printf( "%s%17s\n", "Rango", "Frecuencia" );

      
      
        for ( rango = 1; rango < TAMANIO_FRECUENCIA; rango++ ) {
          printf( "%6d%17d\n", rango, frecuencia[ rango ] );
         } 


return 0;
} 
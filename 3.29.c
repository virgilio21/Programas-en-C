#include <stdio.h> 
 /* la función main inicia la ejecución del programa */
int main(){

int contador = 1; /* inicializa contador */
while ( contador <= 10 ) { /* repite 10 veces */

	/* muestra una línea de texto */
printf( "%s\n", contador % 2 ? "****" : "++++++++" ); 
contador++; /* incrementa contador */
} /* fin de while */

return 0; /* indica que el programa terminó con éxito */ 
} /* fin de la función main */
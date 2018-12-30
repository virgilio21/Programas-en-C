/*Escriba un programa que lea la medida de uno de los 
lados de un cuadrado y que despliegue dicho cuadrado con asteriscos. 
Su programa debe trabajar con cuadrados de tamaño entre 1 y 20. Por ejemplo, 
si su programa lee un tamaño 4, debe desplegar:
****
****
****
****
*/
#include <stdio.h>

int main(){
	int medida_lados = 1;
	int numero_lados, relleno;
    
    printf( "De la mediada de lados del cuadrado:\n" );
    scanf( "%d", &numero_lados);

	while( medida_lados <= numero_lados){
          
          relleno = 1;
		while (relleno <= numero_lados){
			printf( "*" );
			relleno++;
		}
		printf("\n");
		medida_lados++;
	}

	return 0;
}
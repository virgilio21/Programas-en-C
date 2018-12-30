/*El siguiente ejemplo calcula el interés compuesto, utilizando la instrucción for. 
Considere el siguiente
enunciado del problema:
Una persona invierte $1000.00 en una cuenta de ahorros con un 5% de interés. 
Se asume que todo el interés se deja en depósito dentro de la cuenta; calcule y despliegue 
el monto acumulado de la cuenta al final de cada año, durante 10 años. Utilice la siguiente 
fórmula para determinar estos montos:
a = p(1 + r)^n donde

p es el monto de la inversión original (es decir, la inversión principal) es la tasa de interés anual.
r es la tasa de interes anual.
n es el numero de años.
a es el monto del depósito al final del año n.*/

#include <stdio.h>
#include <math.h>

int main(){

	
	double monto;
	int anios;
	double tasa = 0.05;
	double principal = 1000.0;
	

	for( anios = 1; anios <= 10; anios++){

		monto = principal * pow( 1 + tasa,anios );

		printf( "Monto acumulado en el año %d es:%f \n", anios, monto );
        


	}

	return 0;


}
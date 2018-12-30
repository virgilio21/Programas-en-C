//Desarrolle un programa que determine el pago bruto de cada uno de los empleados. 
//Esta empresa paga “horas completas” por las primeras 40 horas trabajadas por cada empleado
// y paga “hora y media” por todas las horas extras trabajadas después de las 40. 
// Usted tiene una lista de los empleados de la empresa, el número de horas que traba- jó cada empleado 
// la semana pasada y el pago por hora de cada empleado. Su programa deberá introducir esta información
// para cada empleado, y deberá determinar y desplegar el pago bruto por empleado.
#include <stdio.h>

int main(){

int horas_trabajadas;
float pago_por_hora,salario_bruto;


printf( "Introduzca el No. de horas laboradas (-1 para terminar):\n");
scanf( "%d", &horas_trabajadas );


while( horas_trabajadas != -1 ){

printf( "Introduzca el pago por hora del empleado: \n" );
scanf( "%f", &pago_por_hora );

if( horas_trabajadas > 40 ){

	salario_bruto = ( horas_trabajadas * pago_por_hora ) + ( pago_por_hora * 0.5 );

}
else {

	salario_bruto = horas_trabajadas * pago_por_hora;
}

printf( "El salario es: $%.2f\n", salario_bruto );

printf( "Introduzca el No. de horas laboradas (-1 para terminar):\n");
scanf( "%d", &horas_trabajadas );


}

return 0;



}
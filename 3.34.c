/*Modifique el programa que escribió en el ejercicio 3.33 de manera 
que despliegue el perímetro del cuadrado. Por ejemplo, 
si su programa lee un tamaño 5.*/

#include <stdio.h>

int main(){

int lado;
int contador = 1;
int contador2 = 1;

printf("Ingrese la medida de los lados del cuadrado: ");
scanf("%d", &lado);
printf(" \n");

while (contador2 <= lado){
contador = 1;

if (contador2 == 1 || contador2 == lado)
{
while (contador <= lado){
printf("%s ", "*");
contador++;
};
}
else
{
while (contador <= lado){

if (contador == 1 || contador == lado)
{
printf("%s ", "*");
contador++;
}
else
{
printf("%s ", " ");
contador++;
}
};
};
printf(" \n");
contador2++;
};
printf(" \n");
return 0;
}






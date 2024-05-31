//25.	Una empresa paga sueldos calculando el valor del sueldo básico por la cantidad de horas trabajadas
//y un plus por antigüedad que corresponde al 2% por cada año trabajado. El sueldo básico es de $4500.
//Se desea ingresar la cantidad de horas trabajadas, la antigüedad y obtener el sueldo neto.

#include <stdio.h>
#include <math.h>

int main(){
   int horas, antiguedad, sueldoneto, sueldo, plus;
   
   printf("Ingrese la cantidad de horas trabajadas:\n");
   scanf("%d", &horas);
   printf("Ingrese la antiguedad del trabajador:\n");
   scanf("%d", &antiguedad);
   
   sueldo = horas * 4500;
   plus = (sueldo/100)* 2 * antiguedad;
   sueldoneto = sueldo + plus;

   printf("El sueldo neto del trabajador es de %d", sueldoneto);

   return 0;
}

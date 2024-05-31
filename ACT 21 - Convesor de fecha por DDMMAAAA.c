//21.	Dada una fecha en el formato DDMMAAAA
//y separarlo en Dia, Mes y Año utilizando operaciones aritméticas. 

#include <stdio.h>
#include <math.h>


int main(){
   unsigned int fecha, dia, mes, año;
   
   printf("Ingrese el valor de la fecha en formato DDMMAAAA:\n");
   scanf("%d", &fecha);

   dia = fecha / 1000000;
   fecha = fecha % 1000000;

   mes = fecha / 10000;
   fecha = fecha % 10000;

   año = fecha;

   printf("Dia: %d, Mes: %d, Año: %d\n", dia, mes, año);

   return 0;
}

//21.	Dada una fecha en el formato DDMMAAAA
//y separarlo en Dia, Mes y Año utilizando operaciones aritméticas. 

#include <stdio.h>
#include <math.h>


int main(){
   unsigned int fecha, dia, mes, año, bisiestos;
   
   printf("Ingrese el valor de la fecha en formato DDMMAAAA:\n");
   scanf("%d", &fecha);
   
   dia = fecha / 1000000;
   fecha = fecha % 1000000;

   mes = fecha / 10000;
   fecha = fecha % 10000;

   año = fecha;
   
   if(dia > 30 && mes == 2){
       printf("Fecha invalida, febrero solo tiene 28 dias en años no bisiestos");
   }else if(dia == 29 && mes == 2){
       bisiestos = año % 4;
       if(bisiestos == 0){
           printf("Dia: %d, Mes: %d, Año: %d\n", dia, mes, año);
       }else if(bisiestos != 0){
           printf("Este año no es bisiesto, por lo que febrero no tiene 29 dias");
       }
   }else if(dia > 31 && (mes == 2 || mes == 4 || mes == 6 || mes == 9 || mes == 11)){
       printf("Fecha invalida, ninguno de estos meses tiene 31 dias");
   }else if(mes > 12 || dia > 32){
       printf("Fecha invalida, el mes no puede ser mayor a 13 ni el dia mayor a 32");
   }else{
       printf("Dia: %d, Mes: %d, Año: %d\n", dia, mes, año);
   }
   return 0;
}

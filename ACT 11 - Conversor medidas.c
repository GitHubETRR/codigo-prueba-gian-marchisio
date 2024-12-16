//11.	Desarrolla un algoritmo que permita
//dados ciertos centímetros como entrada de tipo flotante
//emitir por pantalla su equivalencia en pies (enteros) y en pulgadas

#include <stdio.h>

int main(){
   int tipo;
   float centimetros, pulgadas, pies;
   
   printf("Escriba 1 si su medida esta en pulgadas\n");
   printf("Escriba 2 si su medida esta en pies\n");
   printf("Escriba 3 si su medida esta en centimetros\n");
   scanf("%d", &tipo);
   
   switch(tipo){
       
       case 1:
          printf("Ingrese el valor en pulgadas\n");
          scanf("%f", &pulgadas);
          pies = pulgadas / 12;
          centimetros = pulgadas * 2.54;
          printf("El valor en centimetros es: %f\n", centimetros);
          printf("El valor en pies es: %f\n", pies);
          break;
       case 2:
          printf("Ingrese el valor en pies\n");
          scanf("%f", &pies);
          pulgadas = pies * 12;
          centimetros = pies * 30.48;
          printf("El valor en centimetros es: %f\n", centimetros);
          printf("El valor en pulgadas es: %f\n", pulgadas);
          break;
       case 3:
          printf("Ingrese el valor en centimetros\n");
          scanf("%f", &centimetros);
          pulgadas = centimetros / 2.54;
          pies = centimetros / 30.48;
          printf("El valor en pulgadas es: %f\n", pulgadas);
          printf("El valor en pies es: %f\n", pies);
          break;
       default:
          printf("Las opciones son: 1, 2 o 3.");
          break;
   }
   
   return 0;
}

//11.	Desarrolla un algoritmo que permita
//dados ciertos centímetros como entrada de tipo flotante
//emitir por pantalla su equivalencia en pies (enteros) y en pulgadas

#include <stdio.h>

int main(){
   float centimetros;
   printf("Ingrese su medida en centimetros: ");
   scanf("%f", &centimetros);

   int pies = centimetros / 30.48;
   float pulgadas = centimetros / 2.54;
   
   printf("La medida en pies es: %d y en pulgadas es: %.2f", pies, pulgadas);
   return 0;
}

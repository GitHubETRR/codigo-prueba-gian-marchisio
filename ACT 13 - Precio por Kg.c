//13.	Construye un programa que dados el valor de 1 kg de determinada mercadería 
//y la cantidad mercadería comprada, emite el valor del total a pagar. 

#include <stdio.h>

int main(){
   float preciokg, cantidad, total;

   printf("Ingrese el precio por kg: ");
   scanf("%f", &preciokg);

   printf("ingrese la cantidad de kilogramos comprados: ");
   scanf("%f", &cantidad);
   total = preciokg * cantidad;
   printf("El total a pagar es: %.2f", total);

   return 0;
}

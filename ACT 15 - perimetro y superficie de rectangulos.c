//15.	Construye un programa que permita ingresar
//las medidas de los lados de un rectángulo
//el mismo debe emitir por 
//pantalla su superficie y su perímetro. 

#include <stdio.h>

int main(){
   float lado1, lado2, perimetro, superficie;

   printf("Ingrese el valor del primer lado:\n ");
   scanf("%f", &lado1);

   printf("ingrese el valor del segundo lado: \n");
   scanf("%f", &lado2);
   perimetro = 2 * (lado1 + lado2);
   superficie = lado1 * lado2;
   printf("La superficie del rectangulo es: %.2f \n", superficie);
   printf("El perimetro del rectangulo es: %.2f \n", perimetro);
   
   return 0;
}

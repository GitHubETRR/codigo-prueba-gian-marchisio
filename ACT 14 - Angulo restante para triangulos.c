//14.	Construye un programa que permita ingresar los valores de 2 
//de los ángulos interiores de un triángulo,
//y se emita por pantalla el valor del restante.  

#include <stdio.h>

int main(){
   float angulo1, angulo2, angrestante;

   printf("Ingrese el valor del primer angulo:\n ");
   scanf("%f", &angulo1);

   printf("ingrese el valor del segundo angulo: \n");
   scanf("%f", &angulo2);
   angrestante = 180 - (angulo1 + angulo2);
   if(0 < angulo1+angulo2 & 180 > angulo1+angulo2){
      printf("El angulo restante es: %.2f", angrestante);
 }else{
    printf("Error, el valor del angulo restante es menor a 0 o mayor a 180");
   }

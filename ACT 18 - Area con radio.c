//18.	Desarrollar un algoritmo que le permita leer un valor para el radio (R) 
//y calcule el área (A) de un círculo y emitir su valor. 

#include <stdio.h>
#include <math.h>

const float PI = 3.14;

int main(){
   float R, A;
   
   printf("Ingrese el valor de su radio:\n ");
   scanf("%f", &R);

   A = PI * R * R;

    printf("El valor de su area es: %.2f", A);

   return 0;
}

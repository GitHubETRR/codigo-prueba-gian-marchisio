//22.	Desarrollar un algoritmo que permita leer un valor que represente 
//una temperatura expresada en grados Celsius
// y convierta dicho valor en un valor expresado en grados Fahrenheit. 

#include <stdio.h>
#include <math.h>


int main(){
   float F, C, Temp;
   
   printf("Ingrese la temperatura en grados Celsius:\n");
   scanf("%f", &C);

   Temp = 32 + C * 1.8  ;

   printf("Tu temperatura en grados Fahrenheit es: %.2f\n", Temp);

return 0;
}

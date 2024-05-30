//24.	Desarrollar un algoritmo que permita determinar el área
// y volumen de un cilindro cuyo radio (r) y altura (h) se leen desde teclado. 

#include <stdio.h>
#include <math.h>

int main(){
   float radio, altura, volumen, area;
   
   printf("Ingrese el valor del radio de tu cilindro:\n");
   scanf("%f", &radio);
   printf("Ingrese el valor de la altura de tu cilindro:\n");
   scanf("%f", &altura);

   volumen = 3.14 * radio * radio * altura;
   area = 3.14 * 2 * radio * altura + 2 * (radio * radio * 3.14);

   printf("El volumen de tu cilindro es: %.2f y el area de tu cilindro es %.2f", volumen, area);

return 0;
}

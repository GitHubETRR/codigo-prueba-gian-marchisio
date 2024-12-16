//41.	Desarrolle un algoritmo que ingrese los valores de los lados de un triángulo.
//Valide si las medidas pueden formar un triángulo y luego indique a través de 
//un mensaje que tipo de triángulo es (EQUILÁTERO, ISÓSCELES, O ESCALENO).

#include <stdio.h>
#include <math.h>

int main() {
   int lado1, lado2, lado3;

   printf("Ingrese los valores de los lados de un triángulo:\n");
   scanf("%d %d %d", &lado1, &lado2, &lado3);

   if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
      if (lado1 == lado2 && lado2 == lado3) {
           printf("El triángulo es equilátero.\n");
        }
      else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
           printf("El triángulo es isósceles.\n");
        }
      else {
            printf("El triángulo es escaleno.\n");
        }
   }else {
        printf("Es imposible formar un triángulo con esas medidas\n");
    }

   return 0;
}

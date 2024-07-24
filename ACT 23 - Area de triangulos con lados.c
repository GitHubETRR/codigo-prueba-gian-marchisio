//23.	Desarrollar un algoritmo que permita calcular el área de un triángulo en función
// de las longitudes de sus lados previamente leídos desde el teclado. 

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Ingrese las longitudes de los lados a, b y c del triángulo:\n");
    scanf("%f %f %f", &a, &b, &c);
    
    s = (a + b + c) / 2;
    
   area = sqrt(s*(s-a)*(s-b)*(s-c));
   printf("El valor del area es de: %.2f", area);

   return 0;
}

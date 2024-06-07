//47.	Desarrollar un algoritmo que ingrese números hasta ingresar un número negativo,
//se pide mostrar por pantalla el promedio.
#include <stdio.h>

int main() {
    int num, total = 0, cantidad = 0;
    int promedio;

    printf("Ingrese un número:\n ");
    scanf("%d", &num);

   while (num >= 0) {
      total += num;
      contador++;
      printf("Ingrese un número:\n ");
      scanf("%d", &num);
   }

   if (contador > 0) {
      promedio = total / cantidad;
      printf("El promedio es: %d\n", promedio);
   }else{
      printf("No se ingresaron números positivos.\n");
   }

   return 0;
}

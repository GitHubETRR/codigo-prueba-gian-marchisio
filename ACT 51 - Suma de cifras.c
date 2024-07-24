//51.	Desarrollar un algoritmo que ingrese un entero positivo, 
//y muestre por pantalla la suma de sus cifras.
#include <stdio.h>

int main() {
   int num, i, suma;

   printf("Ingrese un número entero positivo: ");
   scanf("%d", &num);

   if(num>0){
       while(num>0){
       suma+=num%10;
       num /=10;
      }
      printf("La suma de las cifras del numero es: %d\n", suma);
   }
   else printf("El numero ingresado no es un positivo entero");

   return 0;
}

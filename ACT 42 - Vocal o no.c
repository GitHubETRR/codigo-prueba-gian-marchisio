//42.	Construir un programa que ingrese un carácter y determine si es una vocal.

#include <stdio.h>
#include <math.h>

int main() {
   char vocal;

   printf("Ingrese su carácter a verificar: \n");
   scanf("%c", &vocal);

   if (vocal == 'a' || vocal == 'A'){
       printf("Su carácter es una vocal.");
   }else if (vocal == 'e' || vocal == 'E'){
       printf("Su carácter es una vocal");
   }else if (vocal == 'i' || vocal == 'I'){
       printf("Su carácter es una vocal");
   }else if (vocal == 'o' || vocal == 'O'){
       printf("Su carácter es una vocal");
   }else if (vocal == 'u' || vocal == 'U'){
       printf("Su carácter es una vocal");
   }else{
       printf("Su carácter no es una vocal");
   }

   return 0;
}

//54.	Desarrollar un algoritmo que ingrese dos números enteros, (primero < segundo), 
//validar y muestre por pantalla los números enteros del primer número al segundo.


#include <stdio.h>

int main(){
   int i, primero, segundo;
   
   printf("Ingrese el primer numero que debe ser menor al segundo\n");
   scanf("%d", &primero);
   
   printf("Ingrese el segundo numero\n");
   scanf("%d", &segundo);
   
   if (primero > segundo){
       printf("Valores invalidos");
   }else{
       printf("Los numero enteros entre %d y %d son: \n", primero, segundo);
       for(i=primero+1; i <= segundo-1; i++) 
       printf("%d\n", i);
   }
   
   return 0;
}

//35.	Desarrollar un algoritmo que ingrese un número entero 
//de cuatro dígitos e indique con un mensaje si es capicúa.

#include <stdio.h>
#include <math.h>

int main(){
   int num1;
   
    printf("Ingrese su numero entero de 4 cifras: ");
    scanf("%d", &num1);

   if(num1 / 1000 == num1 % 10 && (num1 / 100) % 10 == (num1 % 100) / 10){
       printf("El numero es capicúa");
    }else{
       printf("El numero no es capicúa");
   }
    
return 0;
}

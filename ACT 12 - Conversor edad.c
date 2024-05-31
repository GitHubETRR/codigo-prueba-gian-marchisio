//12.	Construye un programa que pregunte los años que tienes
//y emita como respuesta el número de días vividos. 

#include <stdio.h>

int main(){
   int edad;
   printf("Ingrese su edad: ");
   scanf("%d", &edad);

   float dias = (int)edad * 365;
   
   printf("Tu edad en años es: %d y en dias es: %.f", edad, dias);
   return(0);
}

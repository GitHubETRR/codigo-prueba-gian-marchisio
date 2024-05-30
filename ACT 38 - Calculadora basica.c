//38.	Desarrollar un algoritmo que ingrese dos números y luego un carácter que indique una operación 
//(S-Suma, R-Resta, M-Multiplicación, D-División) y luego realice la operación correspondiente,
//tener en cuenta que no se pueden realizar divisiones por cero. 

#include <stdio.h>
#include <math.h>

int main(){
    float num1, num2, resultado;
    char operacion;

   printf("Ingrese el primer número:\n");
   scanf("%f", &num1);

   printf("Ingrese el segundo número:\n");
   scanf("%f", &num2);

   printf("Ingrese la operación (S-Suma, R-Resta, M-Multiplicación, D-División):\n");
   scanf(" %c", &operacion);


   if (operacion == 'S' || operacion == 's') {
       resultado = num1 + num2;
       printf("El resultado de la suma es: %.2f\n", resultado);
   } else if (operacion == 'R' || operacion == 'r') {
       resultado = num1 - num2;
       printf("El resultado de la resta es: %.2f\n", resultado);
   } else if (operacion == 'M' || operacion == 'm') {
       resultado = num1 * num2;
       printf("El resultado de la multiplicacion es: %.2f\n", resultado);
   } else if (operacion == 'D' || operacion == 'd') {
       if (num2!= 0) {
           resultado = num1 / num2;
           printf("El resultado de la division es: %.2f\n", resultado);
       } else {
           printf("Es imposible dividir por 0.\n");
       }
   } else {
       printf("Error: Las unicas operaciones validas son S/R/M/D.\n");
   }
  
return 0;
}

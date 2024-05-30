//34.	Desarrolla un algoritmo que le permita leer dos valores A y B 
//e indicar si la suma de los dos números es par.

#include <stdio.h>
#include <math.h>

int main(){
   int num1, num2, res, restotal;
   
    printf("Ingrese el valor de su primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese el valor de su segundo numero: ");
    scanf("%d",&num2);
    
    res = num1 + num2;
    restotal = res % 2;

   if(restotal == 1){
       printf("La suma da un numero impar: %d", res);
    }else{
       printf("La suma da un numero par: %d", res);
   }
    
return 0;
}

//31.	Desarrollar un algoritmo que ingrese por consola dos números enteros,
//a continuación, indique si son iguales o distintos.


#include <stdio.h>
#include <math.h>

int main(){
   int num1, num2;
   
    printf("Ingrese el valor de su primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese el valaor de su segundo numero: ");
    scanf("%d",&num2);
    
   if(num1==num2){
       printf("Los numero son igules");
   }else{
       printf("los numeros no son iguales");
   }
    
   return 0;
}

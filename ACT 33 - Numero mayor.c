//33.	Desarrollar un algoritmo que Ingrese tres números e indique cuál es el menor,
//si los tres son iguales indicarlo con un mensaje.

#include <stdio.h>
#include <math.h>

int main(){
   int num1, num2, num3;
   
    printf("Ingrese el valor de su primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese el valor de su segundo numero: ");
    scanf("%d",&num2);
    printf("Ingrese el valor de su tercer numero: ");
    scanf("%d",&num3);
    
   if(num1 == num2 & num2 == num3){
       printf("Todos los numeros son iguales");
    }else if(num1>num2 & num1>num3){
       printf("El numero %d es el mas grande", num1);
    }else if(num2>num1 & num2>num3){
       printf("El numero %d es el mas grande", num2);
    }else{
       printf("El numero %d es el mas grande", num3);
   }
    
   return 0;
}

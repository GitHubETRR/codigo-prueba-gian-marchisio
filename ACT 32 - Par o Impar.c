//32.	Desarrollar un algoritmo que ingrese un numero por teclado y luego indique si es par o impar.


#include <stdio.h>
#include <math.h>

int main(){
   int num, numres;
   
    printf("Ingrese el valor de su numero: ");
    scanf("%d",&num);
    numres = num % 2;
    
   if(numres == 1){
       printf("El numero es impar");
   }else{
       printf("El numero es par");
   }
    
   return 0;
}

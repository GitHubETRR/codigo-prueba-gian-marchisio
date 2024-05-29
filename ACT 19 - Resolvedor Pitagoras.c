//19.	Determinar la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus dos catetos. 
//Desarrollar los correspondientes algoritmos. 

#include <stdio.h>
#include <math.h>


int main(){
   float Cat1, Cat2, Hip;
   
   printf("Ingrese el valor de sus dos catetos:\n ");
   scanf("%f\n%f",&Cat1,&Cat2);

   Hip = sqrt(Cat2 * Cat2 + Cat1 * Cat1);

   printf("El valor de su hipotenusa es: %.2f", Hip);

   return 0;
}

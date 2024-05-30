//28.	Realizar un programa que devuelva la raíces de un 
//polinomio de 2do grado ingresado los coeficientes a,b y c. 

#include <stdio.h>
#include <math.h>

int main(){
   float coa, cob, coc, raiz1, raiz2;
   
    printf("Ingrese el valor de A: ");
    scanf("%f",&coa);
    printf("Ingrese el valor de B: ");
    scanf("%f",&cob);
    printf("Ingrese el valor de C: ");
    scanf("%f",&coc);
   
    raiz1 = (-cob+sqrt(cob*cob- 4 * coa * coc)) / (2 * coa);
    raiz2 = (-cob-sqrt(cob*cob- 4 * coa * coc)) / (2 * coa);
    
    printf("La primer raiz es: \n%.2f \n", raiz1);
    printf("La segunda raiz es: \n%.2f", raiz2);
    //si las raices dan como resultado (-nan) significa que estas son imaginarias (j)
   
return 0;
}

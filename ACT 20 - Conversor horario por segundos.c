//20.	Dada una cantidad entera de segundos (menor a 86400) 
//y conviértela en horas, minutos y segundo utilizando los operadores de cociente y resto enteros. 

#include <stdio.h>
#include <math.h>


int main(){
   unsigned int segs, mins, horas, segundos;
   
   printf("Ingrese la cantidad de segundos\n");
   scanf("%d", &segs);
   
    if(segs<86400){
        horas=segs/3600;
        mins=(segs%3600)/60;
        segundos=(segs%3600)%60;
        printf("Esa cantidad de segundos equivalen a %d horas, %d minutos y %d segundos",horas,mins,segundos);
    }
    else{
    printf("La cantidad de segundos es mayor a 86400");
   }

   return 0;
}

//39.	Desarrollar un algoritmo que ingrese nota entera (entre 1 y 10) de un alumno 
//correspondiente al promedio obtenido, se pide mostrar el siguiente mensaje: 
//"El alumno obtuvo un sobresaliente", según el promedio: 
//10-Sobresaliente, 8 y 9-Distinguido, 6 y 7-Bueno, 4 y 5-Aprobado, 1,2,3-Reprobado.

#include <stdio.h>
#include <math.h>

int main(){
    int nota;

   printf("Ingrese la nota del alumno:\n");
   scanf("%d", &nota);
   
   if (nota == 10){
       printf("El alumnno obtuvo un sobresaliente");
   } else if (nota == 8 || 9 == nota) {
       printf("El alumno obtuvo un distinguido");
   } else if (nota == 6 || 7 == nota) {
       printf("El alumno obtuvo un bueno");
   } else if (nota == 4 || 5 == nota) {
       printf("El alumno obtuvo un aprobado");
   } else if (3 == nota || 2 == nota || 1 == nota){
       printf("El alumno obtuvo un reprobado");
   }else{
       printf("La nota debe estar en el rango 1-10");
   }
   return 0;
}

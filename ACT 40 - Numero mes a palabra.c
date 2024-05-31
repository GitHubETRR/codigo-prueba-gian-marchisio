//40.	Desarrollar un algoritmo que ingrese fecha de nacimiento como tres enteros 
//(DD, MM, AAAA), de una persona y mostrar por pantalla su fecha de nacimiento, 
//de la siguiente forma "La persona nació el 5 de marzo de 1973".

#include <stdio.h>
#include <math.h>

int main(){
    int dia, mes, año;

   printf("Ingrese la fecha de nacimiento en formato DD,MM,AAAA:\n");
   scanf("%d %d %d", &dia, &mes, &año);
   
   if (mes == 1 || mes == 01){
       printf("La persona nació el %d de enero de %d", dia, año);
   }else if (mes == 2 || mes == 02){
       printf("La persona nació el %d de febrero de %d", dia, año);
   }else if (mes == 3 || mes == 03){
       printf("La persona nació el %d de marzo de %d", dia, año);
   }else if (mes == 4 || mes == 04){
       printf("La persona nació el %d de abril de %d", dia, año);
   }else if (mes == 5 || mes == 05){
       printf("La persona nació el %d de mayo de %d", dia, año);
   }else if (mes == 6 || mes == 06){
       printf("La persona nació el %d de junio de %d", dia, año);
   }else if (mes == 7 || mes == 07){
       printf("La persona nació el %d de julio de %d", dia, año);
   }else if (mes == 8 || mes == 8){
       printf("La persona nació el %d de agosto de %d", dia, año);
   }else if (mes == 9 || mes == 9){
       printf("La persona nació el %d de septiembre de %d", dia, año);
   }else if (mes == 10){
       printf("La persona nació el %d de octubre de %d", dia, año);
   }else if (mes == 11){
       printf("La persona nació el %d de noviembre de %d", dia, año);
   }else (mes == 12);{
       printf("La persona nació el %d de diciembre de %d", dia, año);
   }
   return 0;
}

//17.	Construye un programa que permita ingresar 2 tiempos, expresados en horas, minutos y segundos
//el mismo debe emitir por pantalla la suma de ambos (también en horas, minutos y segundos). 

#include <stdio.h>

int main(){
   unsigned int horas1, minutos1, segundos1, horas2, minutos2, segundos2;
   unsigned int total_segundos, total_minutos, total_horas;
   
   printf("Ingrese el primer horario a sumar en horas, minutos y segundos:\n ");
   scanf("%d:%d:%d", &horas1, &minutos1, &segundos1);
   printf("Ingrese el segundo horario a sumar en horas, minutos y segundos:\n ");
   scanf("%d:%d:%d", &horas2, &minutos2, &segundos2);

   total_segundos = segundos1 + segundos2;
   total_minutos = minutos1 + minutos2;
   total_horas = horas1 + horas2;
   
    if(total_segundos>59){
        total_minutos=total_minutos+1;
        total_segundos=total_segundos-60;
    }
    if(total_minutos>59){
        total_horas=total_horas+1;
        total_minutos=total_minutos-60;
    }
    printf("Su tiempo final es equivalente a: %d horas, %d minutos y %d segundos ",total_horas,total_minutos,total_segundos);

   return 0;
}

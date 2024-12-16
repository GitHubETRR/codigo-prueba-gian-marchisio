//36.	Una compañía dedicada a servicio de mensajería realiza envios al interior 
//el costo fijo de traslado es de $1500 si es corta distancia y 2000 si es larga distancia,
//luego dependerá del peso de la mercadería enviada, 
//los de corta distancia si el peso supera los 20 kilos se le cobran $800 por cada kilo 
//de exceso y los de larga distancia se le cobra $800, cada 5 kilos excedidos. 
//Desarrollar un algoritmo que ingrese 
//el tipo de viaje y la cantidad de kilos y me devuelva el costo del viaje.

#include <stdio.h>
#include <math.h>

int main(){
   int viajetipo, peso, totalpesado, totalligero;
   
    printf("Ingrese 1 si tipo de viaje es largo o ingrese 2 si es corto: \n ");
    scanf("%d", &viajetipo);

   if(viajetipo == 1){
       printf("Seleccionó el viaje largo\n");
       printf("Seleccione la cantidad de kilos: \n");
       scanf("%d", &peso);
       if(peso < 20){
           printf("Debe pagar $2000'\n");
       }else{
           totalpesado = (peso - 20) * 160 + 2000;
           printf("Debe pagar $%d", totalpesado);
       }
    }else{
       printf("Seleccionó el viaje corto\n");
       printf("Seleccione la cantidad de kilos\n");
       scanf("%d", &peso);
       if(peso < 20){
           printf("Debe pagar $1500\n");
       }else{
           totalligero = (peso - 20) * 800 + 1500;
           printf("Debe pagar $%d", totalligero);
       }
       }
    
   return 0;
}

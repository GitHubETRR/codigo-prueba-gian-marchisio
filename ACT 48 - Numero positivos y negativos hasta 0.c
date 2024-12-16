//48.	Desarrollar un algoritmo que ingrese números hasta leer un cero,
//calcular y mostrar por pantalla cuántos de ellos son negativos y cuántos son positivos.

#include <stdio.h>

int main(){
    int num, negativos = 0, positivos = 0;
    
    printf("Ingrese un numero.\n");
    scanf("%d", &num);
    
    while(num != 0){
        if(num > 0){
            positivos++;
        }else{
            negativos++;
        }
        printf("Ingrese otro número\n");
        scanf("%d", &num);
    }
    printf("Se ingresaron %d positivos y %d negativos.", positivos, negativos);
    return 0;
}

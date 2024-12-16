//65.	Desarrolle la función “esBisiesto” que reciba un año por parámetro y devuelva “verdadero” 
//si el año es bisiesto (Un año es bisiesto si es divisible por 400, o bien si es divisible por 
//4 pero no por 100). 
#include <stdio.h>
#include <math.h>

void esBisiesto(int);

int main(){
    int año;
    printf("Ingrese un año para comprobar si es bisiesto\n");
    scanf("%d", &año);
    esBisiesto(año);
    return 0;
}

void esBisiesto(int año){
    if(año<1582){
        printf("Aun no existia el calendario actual\n");
    }else{
        if(año<1600){
            printf("Aun no existian los años bisiestos\n");
        }else{
            if(año % 4 == 0){
                printf("El año es bisiesto\n");
            }else{
                printf("El año no es bisiesto\n");
            }
        }
    }
}

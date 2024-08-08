//66.	Desarrolle la función “fechaValida” que reciba por parámetro un día, un mes y un año y 
//devuelva por resultado “verdadero” si la fecha es válida (tener en cuenta años bisiestos). 
#include <stdio.h>
#include <math.h>

void fechaValida(int, int, int);

int main(){
    int dia, mes, año;
    printf("Ingrese una fecha en formato dia mes año\n");
    scanf("%d %d %d", &dia, &mes, &año);
    fechaValida(dia, mes, año);
    return 0;
}

void fechaValida(int dia, int mes, int año){
    if(dia > 31 || mes > 12 || año < 0){
        printf("Fecha invalida");
    }else if (mes == 2 && dia == 30 || mes == 4 && dia == 31 || mes == 6 && dia == 31 || mes == 9 && dia == 31 || mes == 11 && dia == 31){
        printf("Fecha invalida");
    }else if(dia == 29 && mes == 2){
        if (año % 4 == 0){
            printf("Verdadero");
        }else{
            printf("Fecha invalida");
        }
    }else{
        printf("Verdadero");
    }
}

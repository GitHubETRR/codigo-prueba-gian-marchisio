//60.	Desarrolle la función “sumaIntervalo” que reciba dos enteros por parámetro y 
//devuelva por resultado la suma de todos los números enteros entre dichos valores (inclusive). 

#include <stdio.h>
#include <math.h>

int SumaIntervalo(void);

int main(){
    int resultado;
    resultado = SumaIntervalo();
    printf("El resultado de las sumas de todos los numeros entre los ingresados (inclusive) es %d", resultado);
}

int SumaIntervalo(void){
    int num1, num2, res, suma=0;
    printf("Ingrese el primer numero: \n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &num2);
    do {
        suma+=num1;
        num1++;
    }while (num1 <=num2);

    return suma;
}

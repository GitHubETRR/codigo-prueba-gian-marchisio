#include <stdio.h>
#include <math.h>

int potencia(void);

int main(){
    int pot;
    pot = potencia();
    printf("El resultado de tu numero entero elevado a la potencia indicada es: %d", pot);
}

int potencia(void){
    int X, Y, pote;
    printf("Ingrese el valor entero a calcular su potencia\n");
    scanf("%d", &X);
    printf("Ingrese la potencia\n");
    scanf("%d", &Y);
    pote = pow(X,Y);
    return pote;
}

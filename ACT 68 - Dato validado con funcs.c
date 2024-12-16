//68.	Desarrolle la función void datoValidado (int *dato, int min, int max) que reciba un mínimo y
//un máximo por parámetro; que pida por teclado el ingreso de un valor, valide que el valor este 
//entre min y max y lo devuelva en *dato. 
#include <stdio.h>
#include <math.h>

void datoValidado(int *, int, int);

int main() {
    int valor, minimo = 10, maximo = 50;

    datoValidado(&valor, minimo, maximo);

    printf("El valor validado es: %d\n", valor);

    return 0;
}

void datoValidado(int *dato, int min, int max) {
    printf("Ingrese un valor entre %d y %d: ", min, max);
    scanf("%d", dato);

    if (*dato < min || *dato > max) {
        printf("El valor ingresado no está en el rango permitido.\n");
        datoValidado(dato, min, max);
    }
}

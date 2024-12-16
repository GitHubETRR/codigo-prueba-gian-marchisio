//62.	Desarrolle la función “esPrimo” que devuelva verdadero si el 
//numero pasado por parámetro es un numero primo. 

#include <stdio.h>
#include <math.h>

int esPrimo(int numero);

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    if (esPrimo(numero)) {
        printf("El número %d es primo.\n", numero);
    } else {
        printf("El número %d no es primo.\n", numero);
    }
    return 0;
}

int esPrimo(int numero) {
    int i;
    if (numero < 2) {
        return 0;
    }
    for (i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

//52.	Desarrollar un algoritmo que ingresa un número entero mayor o igual cero (validar)
//y luego muestre por pantalla la factorial del mismo.
// (https://www.smartick.es/blog/matematicas/numeros-enteros/factoriales/)

#include <stdio.h>

int main(){
    int num;
    unsigned int factorial = 1;

    printf("Ingrese un número entero mayor o igual a cero: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("El número debe ser mayor o igual a cero\n");
    } else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("El factorial de %d es %u\n", num, factorial);
    }

    return 0;
}

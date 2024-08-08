//67.	Desarrolle la función void maxmin (int x1, int x2, int* max, int* min);
//que recibiendo por parámetros x1 y x2, devuelva el menor de ambos en min y el mayor en max.
#include <stdio.h>
#include <math.h>

void maxmin(int x1, int x2, int* max, int* min) {
    if (x1 > x2) {
        *max = x1;
        *min = x2;
    } else {
        *max = x2;
        *min = x1;
    }
}

int main() {
    int a, b, max, min;
    printf("Ingrese dos números: ");
    scanf("%d %d", &a, &b);
    maxmin(a, b, &max, &min);
    printf("El mayor es: %d\n", max);
    printf("El menor es: %d\n", min);
    return 0;
}

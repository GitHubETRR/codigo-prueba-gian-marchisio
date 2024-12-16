//70.	Luego, análogo al punto anterior, desarrollen un función int ordenarMenor(int* v1, int* v2, int*v3). 
#include <stdio.h>
#include <math.h>

int ordenarMenor(int *v1, int *v2, int *v3);

int main() {
    int v1, v2, v3;
    printf("Ingrese por favor los 3 valores a ordenar\n");
    scanf("%d %d %d", &v1, &v2, &v3);
    ordenarMenor(&v1, &v2, &v3);
    printf("En orden: menor = %d, medio = %d, mayor = %d\n", v1, v2, v3);
    return 0;
}

int ordenarMenor(int* v1, int* v2, int* v3) {
    int a = *v1, b = *v2, c = *v3;
    if (a > b && b > c) {
        *v3 = a;
        *v2 = b;
        *v1 = c;
    } else if (a > c && c > b) {
        *v3 = a;
        *v2 = c;
        *v1 = b;
    } else if (b > a && a > c) {
        *v3 = b;
        *v2 = a;
        *v1 = c;
    } else if (b > c && c > a) {
        *v3 = b;
        *v2 = c;
        *v1 = a;
    } else if (c > a && a > b) {
        *v3 = c;
        *v2 = a;
        *v1 = b;
    } else {
        *v3 = c;
        *v2 = b;
        *v1 = a;
    }
}

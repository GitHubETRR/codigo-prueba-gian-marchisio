//71.	Con las funciones de los dos puntos anteriores, queda la pregunta: 
//¿sería posible hacer una única función que pudiera ordenar las tres variables de menor a mayor o de mayor 
//a menor según se requiera? Plantéenlo, desarróllenlo y hagan un programa que las utilice. 
//Si pudieron hacerlo, dieron un gran paso hacia la anidación de funciones. 
#include <stdio.h>
#include <math.h>

int ordenarMayor(int *v1, int *v2, int *v3);

int main() {
    int v1, v2, v3, op;
    printf("Ingrese por favor los 3 valores a ordenar\n");
    scanf("%d %d %d", &v1, &v2, &v3);
    ordenarMayor(&v1, &v2, &v3);
    printf("Seleccione si quiere ordenarlos de mayor a menor, tocando 1");
    printf("O si quiere ordenarlos de menor a mayor, tocando 2");
    scanf("%d", &op);
    if (op == 1){
        printf("En orden: mayor = %d, medio = %d, menor = %d\n", v3, v2, v1);
    }else if (op == 2){
        printf("En orden: menor = %d, medio = %d, mayor = %d\n", v1, v2, v3);
    }else{
        printf("Numero de orden invalido, imprimiendo ambas opciones...")
        printf("En orden: menor = %d, medio = %d, mayor = %d\n", v1, v2, v3);
        printf("En orden: mayor = %d, medio = %d, menor = %d\n", v3, v2, v1);
    }
    return 0;
}

int ordenarMayor(int* v1, int* v2, int* v3) {
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

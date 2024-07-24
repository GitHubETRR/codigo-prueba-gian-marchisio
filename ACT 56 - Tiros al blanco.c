//56.	Se realizó un concurso de tiro al blanco. Existen 5 participantes y cada uno de ellos efectúa 10
//disparos, registrando las coordenadas (x, y) de cada disparo. Indicar cuántos disparos se produjeron en 
//cada cuadrante y cuantos dieron en el blanco.
#include <stdio.h>

#define participantes 5
#define tiros 10

int main(){
    int c1,c2,c3,c4,objetivo,i,j;
    float x,y;
    for (i = 0; i < participantes; i++){
        printf("Participante %d:\n", i + 1);
        for (j = 0; j < tiros; j++) {
            printf("  Disparo %d - Ingrese coordenadas (x,y): ", j + 1);
            scanf("%f %f", &x, &y);
            if (x > 0 && y > 0) c1++;
            else if (x < 0 && y > 0) c2++;
            else if (x < 0 && y < 0) c3++;
            else if (x > 0 && y < 0) c4++;
            if (x==0 && y==0) objetivo++;
        }
    }
    printf("\nResultados del concurso de disparos:\n");
    printf("Tiros al cuadrante 1: %d disparos\n", c1);
    printf("Tiros al cuadrante 2: %d disparos\n", c2);
    printf("Tiros al cuadrante 3: %d disparos\n", c3);
    printf("Tiros al cuadrante 4: %d disparos\n", c4);
    printf("Disparos en el blanco efectuados: %d\n",objetivo);

    return 0;
}

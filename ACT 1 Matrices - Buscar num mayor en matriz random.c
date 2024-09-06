#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5 

void Matriz_Random(int matriz[N][N]);
void Num_Max(int valormax, int filamax, int colamax, int matriz[N][N]);

 int main(){
    int matriz[N][N];
    int valormax = 0;
    int filamax = 0;
    int colamax = 0;
    Matriz_Random(matriz);
    Num_Max(valormax, filamax, colamax, matriz);
    
    return 0;
}

void Matriz_Random(int matriz[N][N]){
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 30 + 1; 
            printf("%2d ", matriz[i][j]);  
        }
        printf("\n");
    }    
}
void Num_Max(int valormax, int filamax, int colamax, int matriz[N][N]){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] > valormax) {
                valormax = matriz[i][j];
                filamax = i;
                colamax=j;
            }
        }
    }
    printf("El valor maximo es %d y se encuentra en la fila %d y en la columna %d", valormax, filamax + 1, colamax + 1);
}

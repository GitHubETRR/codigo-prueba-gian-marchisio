  #include <stdio.h>

#define SIZE 3

int verificarGanador(char tablero[SIZE][SIZE], char jugador);
void imprimirTablero(char tablero[SIZE][SIZE]);

int main() {
    char tablero[SIZE][SIZE] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    int jugada = 0;
    char jugadorActual = 'X';  
    int fila, columna, casilla;
    int movimientoValido;

    while (jugada < SIZE * SIZE) {
        imprimirTablero(tablero);
        printf("Jugador %c, ingresa un número de casilla: ", jugadorActual);
        scanf("%d", &casilla);

        movimientoValido = 0;
        if (casilla >= 1 && casilla <= 9) {
            fila = (casilla - 1) / SIZE;
            columna = (casilla - 1) % SIZE;

            if (tablero[fila][columna] != 'X' && tablero[fila][columna] != 'O') {
                tablero[fila][columna] = jugadorActual;
                movimientoValido = 1;
                jugada++;

                if (verificarGanador(tablero, jugadorActual)) {
                    imprimirTablero(tablero);
                    printf("¡El jugador %c ganó!\n", jugadorActual);
                    return 0;
                }

                jugadorActual = (jugadorActual == 'X') ? 'O' : 'X';
            } else {
                printf("Casilla ocupada, elige otra.\n");
            }
        } else {
            printf("Entrada inválida. Elige un número entre 1 y 9.\n");
        }
    }

    imprimirTablero(tablero);
    printf("¡Es un empate!\n");

    return 0;
}

void imprimirTablero(char tablero[SIZE][SIZE]) {
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", tablero[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1) printf("---|---|---\n");
    }
    printf("\n");
}

int verificarGanador(char tablero[SIZE][SIZE], char jugador) {
    for (int i = 0; i < SIZE; i++) {
        if ((tablero[i][0] == jugador && tablero[i][1] == jugador && tablero[i][2] == jugador) ||
            (tablero[0][i] == jugador && tablero[1][i] == jugador && tablero[2][i] == jugador))
            return 1;
    }
    if ((tablero[0][0] == jugador && tablero[1][1] == jugador && tablero[2][2] == jugador) ||
        (tablero[0][2] == jugador && tablero[1][1] == jugador && tablero[2][0] == jugador))
        return 1;

    return 0;
}


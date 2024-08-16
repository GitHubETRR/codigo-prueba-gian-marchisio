#include <stdio.h>

int obtenerVida(int);
int obtenerAtaque(int);
int obtenerDefensa(int);
int atacar(int, int, int);
void pelea(int, int, int, int, int, int);

int main() {
    int vida_jugador1 = obtenerVida(1);
    int ataque_jugador1 = obtenerAtaque(1);
    int defensa_jugador1 = obtenerDefensa(1);

    int vida_jugador2 = obtenerVida(2);
    int ataque_jugador2 = obtenerAtaque(2);
    int defensa_jugador2 = obtenerDefensa(2);

    pelea(vida_jugador1, ataque_jugador1, defensa_jugador1, vida_jugador2, ataque_jugador2, defensa_jugador2);

    return 0;
}

int obtenerVida(int numero_jugador) {
    int vida;
    printf("Ingrese la vida del Jugador %d: ", numero_jugador);
    scanf("%d", &vida);
    return vida;
}

int obtenerAtaque(int numero_jugador) {
    int ataque;
    printf("Ingrese el ataque del Jugador %d: ", numero_jugador);
    scanf("%d", &ataque);
    return ataque;
}

int obtenerDefensa(int numero_jugador) {
    int defensa;
    printf("Ingrese la defensa del Jugador %d: ", numero_jugador);
    scanf("%d", &defensa);
    return defensa;
}

int atacar(int vida_defensor, int ataque_atacante, int defensa_defensor) {
    int dano = ataque_atacante - defensa_defensor;
    if (dano > 0) {
        vida_defensor -= dano;
    }
    return vida_defensor;
}

void pelea(int vida_jugador1, int ataque_jugador1, int defensa_jugador1, 
           int vida_jugador2, int ataque_jugador2, int defensa_jugador2) {
    while (vida_jugador1 > 0 && vida_jugador2 > 0) {
        vida_jugador2 = atacar(vida_jugador2, ataque_jugador1, defensa_jugador2);
        printf("Jugador 1 ataca a Jugador 2. Vida de Jugador 2: %d\n", vida_jugador2);
        if (vida_jugador2 <= 0) {
            printf("Jugador 1 gana con %d de vida restante.\n", vida_jugador1);
            return;
        }

        vida_jugador1 = atacar(vida_jugador1, ataque_jugador2, defensa_jugador1);
        printf("Jugador 2 ataca a Jugador 1. Vida de Jugador 1: %d\n", vida_jugador1);
        if (vida_jugador1 <= 0) {
            printf("Jugador 2 gana con %d de vida restante.\n", vida_jugador2);
            return;
        }
    }
}

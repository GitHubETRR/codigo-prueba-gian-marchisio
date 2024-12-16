#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define TAM_TXT 50
#define CAPACIDAD 100
#define PRECIO_ASIENTO 1000

typedef struct {
    int dia;
    int mes;
    int anio;
} fecha_venta_t;

typedef struct {
    char nombre[TAM_TXT];
    char apellido[TAM_TXT];
    fecha_venta_t fecha_venta;
    int numero_asiento; 
    bool estado;     
} reservas_t;


void inicializar_reservas(reservas_t reservas[], int tam);
void registrar_venta(reservas_t reservas[], int tam);
void mostrar_asientos_disponibles(reservas_t reservas[], int tam);
void consultar_asiento(reservas_t reservas[], int tam);
void cerrar_ventas(reservas_t reservas[], int tam);

int main() {
    reservas_t reservas[CAPACIDAD];
    int opcion;

    inicializar_reservas(reservas, CAPACIDAD);

    do {
        printf("\n--- GESTIÓN DE RESERVAS DE ASIENTOS ---\n");
        printf("1. Registrar la venta de un asiento\n");
        printf("2. Mostrar los asientos disponibles\n");
        printf("3. Consultar asientos\n");
        printf("4. Cerrar ventas\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                registrar_venta(reservas, CAPACIDAD);
                break;
            case 2:
                mostrar_asientos_disponibles(reservas, CAPACIDAD);
                break;
            case 3:
                consultar_asiento(reservas, CAPACIDAD);
                break;
            case 4:
                cerrar_ventas(reservas, CAPACIDAD);
                break;
            case 5:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida. Intente nuevamente.\n");
        }
    } while (opcion != 5);

    return 0;
}

void inicializar_reservas(reservas_t reservas[], int tam) {
    for (int i = 0; i < tam; i++) {
        reservas[i].estado = false; 
    }
}

void registrar_venta(reservas_t reservas[], int tam) {
    int asiento;
    printf("Ingrese el número del asiento (0-%d): ", tam - 1);
    scanf("%d", &asiento);

    if (asiento < 0 || asiento >= tam) {
        printf("Número de asiento inválido.\n");
        return;
    }

    if (reservas[asiento].estado) {
        printf("El asiento ya está vendido.\n");
    } else {
        printf("Ingrese el nombre: ");
        scanf("%s", reservas[asiento].nombre);
        printf("Ingrese el apellido: ");
        scanf("%s", reservas[asiento].apellido);
        printf("Ingrese la fecha de venta (dd mm aaaa): ");
        scanf("%d %d %d", &reservas[asiento].fecha_venta.dia,
              &reservas[asiento].fecha_venta.mes,
              &reservas[asiento].fecha_venta.anio);

        reservas[asiento].numero_asiento = asiento; 
        reservas[asiento].estado = true;
        printf("Venta registrada. Asiento %d vendido por $%d.\n", asiento, PRECIO_ASIENTO);
    }
}


void mostrar_asientos_disponibles(reservas_t reservas[], int tam) {
    int disponibles = 0, ocupados = 0, total_recaudado = 0;
    int asientos_por_grupo = 2;
    int asientos_por_fila = 4;

    printf("Asientos: \n");
    for (int i = 0; i < tam; i++) {
        if (i % asientos_por_fila == 0) {
            printf("  ");
        }

        if (reservas[i].estado == 0) {
            printf("\033[32m%2d \033[0m", i);  
            disponibles++;
        } else {
            printf("\033[31m%2d \033[0m", i); 
            ocupados++;
            total_recaudado += PRECIO_ASIENTO;
        }

        if ((i + 1) % asientos_por_grupo == 0 && i != tam - 1) {
            printf("    ");
        }

        if ((i + 1) % asientos_por_fila == 0) {
            printf("\n");
        }
    }

    if (tam % asientos_por_fila != 0) {
        printf("\n");
    }

    printf("Total de asientos disponibles: %d\n", disponibles);
    printf("Total de asientos ocupados: %d\n", ocupados);
    printf("Total recaudado: $%d\n", total_recaudado);
}

void consultar_asiento(reservas_t reservas[], int tam) {
    int opcion;
    char apellido[TAM_TXT];
    printf("Consultar por apellido\n");
    printf("Ingrese el apellido: ");
    scanf("%s", apellido);

    int encontrados = 0;
    printf("Asientos comprados por personas con apellido '%s':\n", apellido);
    for (int i = 0; i < tam; i++) {
        if (reservas[i].estado && strcmp(reservas[i].apellido, apellido) == 0) {
            printf("Asiento %d: %s %s, Fecha: %02d/%02d/%04d\n", 
                   reservas[i].numero_asiento, 
                   reservas[i].nombre, 
                   reservas[i].apellido,
                   reservas[i].fecha_venta.dia, 
                   reservas[i].fecha_venta.mes, 
                   reservas[i].fecha_venta.anio);
            encontrados++;
        }
    }
    if (encontrados == 0) {
        printf("No se encontraron asientos vendidos a personas con el apellido '%s'.\n", apellido);
    }
}

void cerrar_ventas(reservas_t reservas[], int tam) {
    int vendidos = 0, total_recaudado = 0;

    for (int i = 0; i < tam; i++) {
        if (reservas[i].estado) {
            vendidos++;
            total_recaudado += PRECIO_ASIENTO;
            reservas[i].estado = false; 
        }
    }

    printf("Total recaudado: $%d\n", total_recaudado);
}

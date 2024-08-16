//76.	Escribe un programa teniendo en cuenta las siguientes funciones 
//•	leeOpcion lee la opción deseada y comprueba su validez 
//•	menú muestra el menú en la pantalla 
//•	cuadrado, circulo, rectángulo, trapecio, triángulo calculan la superficie correspondiente. 

//El menú por mostrar sería algo como lo que sigue:
 
#include <stdio.h>
#include <math.h>
#define PI 3.1416

void bienvenida(void);
void menu(void);
void areaCuadrado(void);
void areaCirculo(void);
void areaRectangulo(void);
void areaTrapecio(void);
void areaTriangulo(void);

int main() {
    bienvenida();
    menu();
    return 0;
}

void bienvenida(void){
    printf("Bienvenido al programa para obtener area de figuras, por favor ingrese una de las siguiente opciones\n");
}

void menu(void){
    int op, op2;
    printf("************************************\n");
    printf("****** CÁLCULO DE SUPERFICIES ******\n");
    printf("1. Cuadrado (lado*lado)\n");
    printf("2. Círculo (pi*radio*radio)\n");
    printf("3. Rectángulo (base*altura)\n");
    printf("4. Trapecio (base1+base2)*altura/2)\n");
    printf("5. Triángulo (base*altura)/2)\n");
    printf("0. Salir del programa\n");
    printf("************************************\n");
    scanf("%d", &op);
    
    switch(op){
        case 0:
            break;
        
        case 1:
            areaCuadrado();
            printf("Si quiere realizar otra operacion, ingrese 1\n");
            scanf("%d", &op2);
            if (op2 == 1){
                menu();
            }
            break;
        case 2:
            areaCirculo();
            printf("Si quiere realizar otra operacion, ingrese 1\n");
            scanf("%d", &op2);
            if (op2 == 1){
                menu();
            }
            break;
        case 3:
            areaRectangulo();
            printf("Si quiere realizar otra operacion, ingrese 1\n");
            scanf("%d", &op2);
            if (op2 == 1){
                menu();
            }
        case 4:
            areaTrapecio();
            printf("Si quiere realizar otra operacion, ingrese 1\n");
            scanf("%d", &op2);
            if (op2 == 1){
                menu();
            }
        case 5:
            areaTriangulo();
            printf("Si quiere realizar otra operacion, ingrese 1\n");
            scanf("%d", &op2);
            if (op2 == 1){
                menu();
            }
    }
}

void areaCuadrado(){
    float lado, area;
    printf("Ingrese uno de los lados de su cuadrado\n");
    scanf("%f", &lado);
    area = lado * lado;
    printf("El area del cuadrado es %.2f\n", area);
}

void areaCirculo(){
    float radio, area;
    printf("Ingrese el radio de su circulo\n");
    scanf("%f", &radio);
    area = PI * radio * radio;
    printf("El area del circulo es %.2f\n", area);
}

void areaRectangulo(){
    float base, altura, area;
    printf("Ingrese la base de su rectangulo\n");
    scanf("%f", &base);
    printf("Ingrese la altura de su rectangulo\n");
    scanf("%f", &altura);
    area = base * altura;
    printf("El area de su rectangulo es %.2f\n", area);
}

void areaTrapecio(){
    float base1, base2, altura, area;
    printf("Ingrese el valor de las dos bases de su trapecio\n");
    scanf("%f %f", &base1, &base2);
    printf("Ingrese el valor de la altura de su trapecio\n");
    scanf("%f", &altura);
    area = (base1 + base2) * altura / 2;
    printf("El area de su trapecio es %.2f\n", area);
}

void areaTriangulo(){
    float base, altura, area;
    printf("Ingrese el valor de la base de su triangulo\n");
    scanf("%f", &base);
    printf("Ingrese el valor de la altura de su triangulo\n");
    scanf("%f", &altura);
    area = (base * altura) /2;
    printf("El area de su triangulo es %.2f\n", area);
}

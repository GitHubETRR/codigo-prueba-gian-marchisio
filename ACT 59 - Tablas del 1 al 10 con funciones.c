//59.	Desarrolle la función “tablaDeMultiplicar” que reciba un entero por parámetro 
//y muestre por pantalla su tabla de multiplicar de 0 a 10. 

#include <stdio.h>
#include <math.h>

int tablaDeMultiplicar(void);

int main(){
    tablaDeMultiplicar();
}

int tablaDeMultiplicar(void){
    int valor, i;
    printf("Ingrese un numero del 1 al 10 para mostrar su tabla de multiplicar\n");
    scanf("%d", &valor);
    printf("La tabla de multiplicar del %d es: \n", valor);
    if (valor > 10 || valor < 0){
        printf("Valor invalido");
    }else{
        for (i=0; i<11; i++){
            printf("%d x %d = %d\n", valor, i, valor*i);
        }
    }
}

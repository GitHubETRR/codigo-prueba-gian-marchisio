//37.	Desarrollar un algoritmo que ingrese tres caracteres y 
//mostrarlos ordenados según el orden ascendente del alfabeto. 

#include <stdio.h>
#include <math.h>

int main(){
   char caracter0;
   char caracter1;
   char caracter2;
   
   printf("Ingrese los 3 caracteres a ordenar:\n");
   scanf("%c %c %c", &caracter0, &caracter1, &caracter2);

   if (caracter0 > caracter1) {
        if (caracter1 > caracter2)
            printf("Los caracteres son: %c, %c, %c \n", caracter2, caracter1, caracter0);
        else if (caracter0 > caracter2)
            printf("Los caracteres son: %c, %c, %c \n", caracter1, caracter2, caracter0);
        else
            printf("Los caracteres son: %c, %c, %c \n", caracter1, caracter0, caracter2);
    }else{   
        if (caracter0 > caracter2)
            printf("Los caracteres son: %c, %c, %c \n", caracter2, caracter0, caracter1);
        else if (caracter1 > caracter2)
            printf("Los caracteres son: %c, %c, %c \n", caracter0, caracter2, caracter1);
        else
            printf("Los caracteres son: %c, %c, %c \n", caracter0, caracter1, caracter2);
    }
    
return 0;
}

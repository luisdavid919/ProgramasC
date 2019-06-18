#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <curses.h>

int main() {
    char a; //declaro una variable de tipo caracter
    int b; //declaro una variable de tipo entero
    printf("Hola, presiona una tecla para adivinarla!\n"); //imprimo en pantalla el mensaje para el usuario
    scanf("%c", &a); //leo la letra, numero o símbolo que metio el usuario
    b = a; //asigno a b lo que tiene a, pero lo convierto de char a int
    printf("EL valor en ASCII es: %d\n\n", b); //imprimo el valor de la letra en código numerico
    getchar(); //espero una orden para salir del programa
main();
    return 0;

}


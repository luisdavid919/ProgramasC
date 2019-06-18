#include <stdio.h>
#include <curses.h>


    #define PORCENTAJE 0.40
    #define ASISTENCIA_TAREAS 0.30
    #define AC 61
    #define TAREAS 5
    #define ASISTENCIA 7

void main() {

    float exa, asis, tareas,promedio;


    printf("||BIENVENIDO A MI SISTEMA DE CALIFICACIONES||\n");
    printf("Examen(61aC) -> 40%c\n",'%');
    printf("Tareas(5) -> 30%c\n",'%');
    printf("Asistencias(7) -> 30%c\n",'%');
    printf("Ingresa los aciertos obtenidos en tu exámen:\n");
    scanf("%f",&exa);
    exa=(exa*10/AC)*(PORCENTAJE) ;
    printf("Tu puntaje del exámen es de: %.8f\n",exa);
    printf("Ingresa tus tareas entregadas:\n");
    scanf("%f",&tareas);
    tareas=(tareas*10/TAREAS)*(ASISTENCIA_TAREAS);
    printf("Tu puntaje de tareas es de: %.8f\n",tareas);
    printf("Ingresa tus asistencias:\n");
    scanf("%f",&asis);
    asis=(asis*10/ASISTENCIA)*(ASISTENCIA_TAREAS);
    printf("Tu puntaje de asistencias es:%.8f\n",asis);
    promedio = exa+tareas+asis;
    printf("Tu promedio es de: %.8f",promedio);
    //getch();
}
#include <stdio.h>



int main() {

    int a,b,c, promedio;
    const int x=3;
        printf("Bienvenido a mi programa de promedio!\n");
        printf("Dame las calificaciones de tu primer parcial:\n");
        scanf("%d",&a);
        printf("Dame las calificaciones de tu segundo parcial:\n");
        scanf("%d",&b);
        printf("Dame las calificaciones de tu tercer parcial:\n");
        scanf("%d",&c);
        promedio=(a+b+c)/x;
        printf("Tu promedio del semestre es de: %d\n",promedio);
            if(promedio <6) {
                printf("LO siento, estas reprobado :(\n");
                printf("Hola");
            }else {
                printf("Felicidades, aprobaste :)\n");
    printf("Felicidades, aprobaste :)\n");
    printf("Felicidades, aprobaste :)\n");
    printf("Felicidades, aprobaste :)\n");}
            if(promedio>=8 && promedio<=10)
                printf("Tienes una beca\n");
            else
                printf("NO tienes beca\n");
    return 0;
}
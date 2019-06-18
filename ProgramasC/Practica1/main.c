#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>

void main(void) {

    char opc;
    float a=0,b=0,C=2,res=0;

    printf("\tBienvenido a mi Sistema!\n");
    printf("Por favor, selecciona una opci%cn:\n",162);
    printf("a.- Has seleccionado: '%crea de un Tri%cngulo':\n"
           "b.- Has seleccionado: '%crea de un Cuadrado':\n"
           "c.- Has seleccionado: '%crea de un Rect%cngulo':\n"
           "d.- Has seleccionado: '%crea de un Romboide':\n"
           "e.- Has seleccionado: '%crea de un Rombo':\n"
           "f.- Has seleccionado: '%crea de un Trapecio':\n"
           "default.- Volver al menu principal:\n\n",181,160,181,181,160,181,181,181);
    scanf("%c",&opc);
        switch(opc)
        {
            case 'a':
            case 'A':
                printf("**%crea de un Tri%cngulo**\n",181,160);
                printf("Dame la base:\n");
                scanf("%f",&a);
                printf("Dame la altura:\n");
                scanf("%f",&b);
                res= (a*b)/C;
                printf("El resultado del %crea es: %.4f",160,res);
                break;
                default:
                printf("Has seleccionado volver al menu principal\n\n");
                printf("Presiona una tecla para continuar...\n\n");
                //getch();
                //system("cls");
                main();
        }
    //getchar();
}
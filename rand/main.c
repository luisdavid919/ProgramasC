#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    char opc;
    int dado1,dado2,dado3,opc2,opc3;
    srand(time(NULL));
    printf("**Bienvenido a mi programa Juego de Dados**\n");
    printf("[a]Dos jugadores**\n");
    printf("[b]Tres jugadores**\n");
    printf("Elige una opción:\n");
    scanf("%c",&opc);
        switch (opc) {
            case 'a':
            case 'A':
                printf("Dos jugadores:\n");
                printf("Presiona un uno para iniciar:\n");
                scanf("%d", &opc2);
                if (opc2 == 1) {
                    printf("Jugador uno lanza el primer dado:\n");
                    dado1 = 1 + (rand() % 6);
                    printf(".....\n");
                    printf("El resultado es de %d\n", dado1);
                    printf("Jugador dos lanza el segundo dado:\n");
                    dado2 = 1 + (rand() % 6);
                    printf(".....\n");
                    printf("El resultado es de %d\n", dado2);

                    if (dado1 > dado2)
                        printf("\nHa ganado el jugador uno: **FELICIDADES**\n");
                    else if (dado2 > dado1)
                        printf("\nHa ganado el jugador dos: **FELICIDADES**\n");
                    else
                        printf("\nHan quedado empatados\n");
                } else
                    printf("NO has elegido una opción válida. **GAME OVER**\n");
                break;
            case 'b':
            case 'B':
                printf("Tres jugadores:\n");
                printf("Presiona un dos para iniciar:\n");
                scanf("%d", &opc3);
                if (opc3 == 2) {
                    printf("Jugador uno lanza el primer dado:\n");
                    dado1 = 1 + (rand() % 6);
                    printf(".....\n");
                    printf("El resultado es de %d\n", dado1);
                    printf("Jugador dos lanza el segundo dado:\n");
                    dado2 = 1 + (rand() % 6);
                    printf(".....\n");
                    printf("El resultado es de %d\n", dado2);
                    printf("Jugador tres lanza el tercer dado:\n");
                    dado3 = 1 + (rand() % 6);
                    printf(".....\n");
                    printf("El resultado es de %d\n", dado3);

                    if (dado1 > dado2 && dado1 > dado3)
                        printf("\nHa ganado el jugador uno: **FELICIDADES**\n");
                    else if (dado2 > dado1 && dado2 > dado3)
                        printf("\nHa ganado el jugador dos: **FELICIDADES**\n");
                    else if (dado3 > dado1 && dado3 > dado2)
                        printf("\nHa ganado el jugador tres: **FELICIDADES**\n");
                    else if (dado1 == dado2)
                        printf("\nHan quedado empatados jugador 1 y 2\n");
                    else if (dado1 == dado3)
                        printf("\nHan quedado empatados jugador 1 y 3\n");
                    else if (dado1 == dado2 && dado1 == dado3)
                        printf("\nHan quedado empatados los tres jugadores\n");
                    else if (dado2 == dado3)
                        printf("Han quedado empatados jugador 2 y 3\n");
                } else
                    printf("NO has elegido una opción válida. **GAME OVER**\n");
                break;

            default: printf("No has seleccionado una opción válida, FIN DEL JUEGO\n");
                return 0;
        }
}
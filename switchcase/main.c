#include <stdio.h>
#include <stdlib.h>

int main() {

    int a=0,b,c;
    char opc;
    printf("Bienvenido a mi programa!\n");
    printf("Elige una opción del menu***\n");
    printf("1.- Suma***\n");
    printf("2.- Resta***\n");
    scanf("%c",&opc);
        switch(opc){
            case 'a':
            case 'A':
                   printf("Suma de dos números\n");
                   printf("Dame el primer número:\n");
                   scanf("%d",&b);
                   printf("Dame el segundo número:\n");
                   scanf("%d",&c);
                   printf("EL resultado de tu suma es de %d",b+c);
            break;

            case 2: printf("Resta de dos números\n");
                    printf("Dame el primer número:\n");
                    scanf("%d",&b);
                    printf("Dame el segundo número:\n");
                    scanf("%d",&c);
                    printf("EL resultado de tu resta es de %d\n",b-c);
            break;

            default: printf("No has elegido una opción válida\n");
        }

        main();
    return 0;
}
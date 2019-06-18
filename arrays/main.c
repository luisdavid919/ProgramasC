#include <stdio.h>

int main() {
    int numeros[5];  /* matriz a ordenar */
    int i;   /* una variable para el bucle */
    int aux;  /* variable auxiliar para swaps */

                                           /* necesitamos 5 - 1 comparaciones, ¿por qué? */
    for(i=0;i<4;i++) {
        /* comparar elementos adyacentes */

        if (numeros[i]>numeros[i+1]) {
            /* si fuimos aquí significa que tenemos para intercambiar los elementos */
            aux = numeros[ i ];
            numeros[i]=numeros[ i + 1 ];
            numeros[i+1]=aux;
                                       }
    }
    return 0;
}
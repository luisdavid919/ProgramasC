#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int i,j,temp,array1[11],array2[11],index=0,tope=11,topar3=22;
    long int array3[22];
    srand(time(NULL));

    for(i=0;i<=10;i++){
        array1[i]=0;
    }

    printf("El arreglo uno contiene:\n");
    for(i=0; i<=10; i++){
        array1[i]= 500 + rand()%(525+1-500);
        printf("%d\t", array1[i]);

    }

        printf("\n\n");

    for(i=0;i<=10;i++){
        array2[i]=0;
    }

    printf("El arreglo dos contiene:\n");
    for(i=0; i<=10; i++){
        array2[i]= 1 + rand()%(50+1-1);
        printf("%d\t", array2[i]);

    }
    printf("\n\n\033[32mArreglo 1 posicion 0: %d\n", array1[0]);
    printf("\033[32mArreglo 1 posicion 10: %d\n\n", array1[10]);
    printf("\033[31mArreglo 2 posicion 11: %d\n", array2[0]);
    printf("\033[31mArreglo 2 posicion 21: %d\n\n", array2[10]);

        for(i=0;i<tope;i++){
            array3[index] = array1[i];
            index++;
            //printf("%d\n",index);
        }

        for(i=0;i<tope;i++){
            array3[index] = array2[i];
            index++;
            //printf("%d\n",index);
        }

        printf("\033[38mEl arreglo tres contiene:\n");

        for(i = 0; i <=21; i++)
            printf("%d\t", array3[i]);

    printf("\n\n\033[36mArreglo 3 posicion 0: %d\n", array3[0]);
    printf("\033[36mArreglo 3 posicion 21: %d\n", array3[21]);

    return 0;

}


















    //metodo de ordenamiento burbuja//


    /*  for (i=0;i<topar3;i++){
         for(j=0;j<topar3-i;j++)
         {
             if(array3[j]>array3[j+1]){
                 temp=array3[j];
                 array3[j]=array3[j+1];
                 array3[j+1]=temp;
             }
         }
     }

    printf("\n\n\033[33mEl arreglo por ordenamiento burbuja de modo ascendente es:\n");
         fflush(stdin);
         for(i=0;i<22;i++)
             printf("%d\t", array3[i]);*/



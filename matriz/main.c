#include <stdio.h>

int main() {
    printf("Programa de declaración de matrices!\n");
    //int array[2][2];
    //int array[2][2]={0,1,2,3};
    //int matriz1[2][2]={'0','1','2','3'};

    //int matriz1[2][2]={{4,1},{2,10}};
    //int matriz2[2][2]={{3,2},{5,1}};


    int opc,matriz1[2][2]={{4,1},{2,10}},matriz2[2][2]={{3,2},{5,1}},matriz3[2][2];

    /*printf("\033[32mEl valor de la matriz array[0][0] es de %d\n",array[0][0]);
    printf("\033[32mEl valor de la matriz array[0][1] es de %d\n",array[0][1]);
    printf("\033[32mEl valor de la matriz array[1][0] es de %d\n",array[1][0]);
    printf("\033[32mEl valor de la matriz array[1][1] es de %d\n\n",array[1][1]);

    printf("\033[36mEl valor de la matriz array[0][0] es de %c\n",array[0][0]);
    printf("\033[36mEl valor de la matriz array[0][1] es de %c\n",array[0][1]);
    printf("\033[36mEl valor de la matriz array[1][0] es de %c\n",array[1][0]);
    printf("\033[36mEl valor de la matriz array[1][1] es de %c\n",array[1][1]);*/

    //ceros en automático
    //suma, resta, multiplicación y división .- OK
    //pedir al usuario que llene la matriz
    //numeros rand 1-25

    printf("\033[32m***Suma de Matrices***\n");
    matriz3[0][0]=matriz1[0][0]+matriz2[0][0];
    matriz3[0][1]=matriz1[0][1]+matriz2[0][1];
    matriz3[1][0]=matriz1[1][0]+matriz2[1][0];
    matriz3[1][1]=matriz1[1][1]+matriz2[1][1];

    printf("El resultado de la suma de la matriz 1 y 2 es:\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
     printf("[%d][%d] = %d\t",i,j,matriz3[i][j]);
                            }
                        }
    printf("\n\n");

    printf("\033[33m***Resta de Matrices***\n");
    matriz3[0][0]=matriz1[0][0]-matriz2[0][0];
    matriz3[0][1]=matriz1[0][1]-matriz2[0][1];
    matriz3[1][0]=matriz1[1][0]-matriz2[1][0];
    matriz3[1][1]=matriz1[1][1]-matriz2[1][1];

    printf("El resultado de la resta de la matriz 1 y 2 es:\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("[%d][%d] = %d\t",i,j,matriz3[i][j]);
        }
    }
    printf("\n\n");

    //Multiplicación de Matrices
    printf("\033[35m***Multiplicación de Matrices***\n");
    matriz3[0][0]=(matriz1[0][0]*matriz2[0][0])+(matriz1[0][1]*matriz2[1][0]);
    matriz3[0][1]=(matriz1[0][0]*matriz2[0][1])+(matriz1[0][1]*matriz2[1][1]);
    matriz3[1][0]=(matriz1[1][0]*matriz2[0][0])+(matriz1[1][1]*matriz2[1][0]);
    matriz3[1][1]=(matriz1[1][0]*matriz2[0][1])+(matriz1[1][1]*matriz2[1][1]);

    printf("El resultado de la multiplicación de la matriz 1 y 2 es:\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("[%d][%d] = %d\t",i,j,matriz3[i][j]);
        }
                        }

        printf("\n\n");


    //División de Matrices
    printf("\033[36m***División de Matrices***\n");
    printf("Ingresa el número a dividir la matriz:\n");
    scanf("%d",&opc);

    printf("Matriz 1\n");
    matriz3[0][0]=(matriz1[0][0]/opc);
    matriz3[0][1]=(matriz1[0][0]/opc);
    matriz3[1][0]=(matriz1[1][0]/opc);
    matriz3[1][1]=(matriz1[1][0]/opc);

    printf("El resultado de la multiplicación de la matriz 1 es:\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("[%d][%d] = %d\t",i,j,matriz3[i][j]);
        }
    }

    printf("\n\n");

    printf("Matriz 2\n");
    matriz3[0][0]=(matriz2[0][0]/opc);
    matriz3[0][1]=(matriz2[0][0]/opc);
    matriz3[1][0]=(matriz2[1][0]/opc);
    matriz3[1][1]=(matriz2[1][0]/opc);

    printf("El resultado de la multiplicación de la matriz 2 es:\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("[%d][%d] = %d\t",i,j,matriz3[i][j]);
        }
    }

    printf("\n\n");



    return 0;
}
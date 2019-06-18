#include <stdio.h>

int main() {
    int a;
    printf("Dame un numero a evaluar:\n");
    scanf("%d",&a);
    //printf("Numero par/impar");
    (a%2==0) ? printf("ES par") : printf("Es impar");
    return 0;
}
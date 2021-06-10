#include <stdio.h>

int x;
int y;
int resultado;
int main(){
    printf("ingrese el valor de X\n");
    scanf("%i", &x);
    printf("ingrese el valor de Y\n");
    scanf("%i", &y);
    for (int i = 0; i < y; i++)
    {
        resultado += x; 
    }
    printf("el resultado de %i * %i es %i\n", x,y,resultado);
    return 0;
}
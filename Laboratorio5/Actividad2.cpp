#include <stdio.h>

main(){
    unsigned char caracter;
    printf("ingrese el caracter utilizado en ASCII:\n");
    scanf ("%c", &caracter);
    printf("el caracter ingresado (%c) corresponde a %d en codigo ASCII", caracter, caracter);
    getchar();
    getchar();
    return 0;
}
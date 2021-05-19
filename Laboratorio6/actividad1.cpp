#include <stdio.h>

int numero;
int main(){
    printf("ingrese el numero que desea conocer si es par o impar\n");
    scanf("%i", &numero);
    if (numero % 2 == 0)
    {
        printf("el numero ingresado es par\n");
    }else{
        printf("el numero ingresado es impar\n");
    }
    return 0;
}
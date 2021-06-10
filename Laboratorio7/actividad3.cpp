#include <stdio.h>
int numero;
int resto;
int i;
int main (){
    printf("ingrese un numero\n");
    scanf("%i",&numero);
    for (int i = 1; i <= numero; i++)
    {
        resto = numero%i;
        if (resto == 0)
        {
           printf("%i\n", i);
        }
        
    }
    
    return 0;
}
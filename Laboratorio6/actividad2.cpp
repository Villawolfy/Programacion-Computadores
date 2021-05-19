#include <stdio.h>

int numero1;
int numero2;
int numero3;
int main(){
    printf("ingrese el primer numero\n");
    scanf("%i", &numero1);
     printf("ingrese el segundo numero\n");
     scanf("%i", &numero2);
     printf("ingrese el tercer numero\n");
     scanf("%i", &numero3);
     if ((numero1 == numero2) && (numero1 == numero3) && (numero2 == numero3))
     {
        printf("hay 2 o mas numeros del mismo valor\n");
     } else if ((numero1 > numero2) && (numero1 > numero3)){
         printf("el numero %i es el mayor de los 3\n", numero1 );
     } else if ((numero2 > numero1) && (numero2 > numero3))
     {
         printf("el numero %i es el mayor de los 3\n", numero2 );
     } else{
         printf("el numero %i es el mayor de los 3\n", numero3);
     }

     return 0;
}
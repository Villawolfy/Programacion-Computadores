#include <stdio.h>

int clave = 206112093;
int main (){
    printf("ingrese su clave\n");
    scanf("%i",&clave);
    if (clave == 206112093)
    {
        printf("Bienvenido usuario\n");
    } else{
        printf("clave incorrecta, ingresela nuevamente(2 intentos)\n");
        scanf("%i", &clave);
    }  if (clave == 206112093){
    
    } else{
        printf("clave incorrecta, ingresela nuevamente(1 intento)\n");
        scanf("%i", &clave);
    }
    if (clave == 206112093)
    {
 
    } else{
        printf("clave incorrecta, limite de intentos excedido\n");
    }
    return 0;
    }


#include <stdio.h>

int main (){
    //declarar arreglo de 100 elementos y rellenar con valores del 1 al 100
    int numeros[100];
    for (int i = 0; i < 100; i++)
    {
        numeros[i]= i+1;
        printf("numeros[%i]=%i\n", i, numeros[i]);
    }
    //busqueda secuencial
    int valores[]={1,89,70,16,72,23,8,10};
    int busqueda;
    printf("ingrese el numero que desea buscar\n");
    scanf("%i", &busqueda);
    for (int i = 0; i < 8; i++)
    {
        if (valores [i]== busqueda)
        {
            printf("el numero %i esta en valores [%i]\n", busqueda, i);
        }
        
    }
    //busqueda binaria
    int valores2[] = {1, 7, 10, 16, 20, 23, 78, 100};
    int minimo = valores2[0];
    int maximo = valores2[7];
    int central;
    while (minimo<=maximo)
    {
        central = (minimo + maximo)/2;
        if (busqueda == valores2[central])
        {
            printf("el numero %i esta en valores[%i]\n", busqueda, central);
            break;
        } else{
            if (valores2[central]>busqueda)
            {
                maximo = central - 1;
            }else{
                minimo = central + 1;
            }
            
        }
        
    }
    
    return 0;
}
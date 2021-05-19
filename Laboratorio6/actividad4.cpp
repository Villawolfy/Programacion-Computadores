#include <stdio.h>
  
int destino1; // para pasajeros menores de 15
int destino2; // para pasajeros de 15 a 65
int destino3; // para pasajeros mayores a 65
int edad;
int main (){
    printf("ingrese su edad\n");
    scanf("%i", &edad);
    if (edad <= 15)
    {
        
        printf("ingrese a que destino quiere ir (1,2,3)");
        scanf("%i", &destino1);
        if (destino1 == 1 )
        {
            printf("el valor del pasaje es de $2500");
        } else if (destino1 == 2)
        {
            printf("el valor del pasaje es de $1200");
        } else if (destino1 == 3)
        {
            printf("el valor del pasaje es de $2000");
        } else {
            printf ("destino no valido");
        }
        }
    else if ( edad >= 65)
    {
        printf("ingrese a que destino quiere ir (1,2,3)");
        scanf("%i", &destino2);
        if (destino2 == 1 )
        {
            printf("el valor del pasaje es de $4200");
        } else if (destino2 == 2)
        {
            printf("el valor del pasaje es de $3000");
        } else if (destino2 == 3)
        {
            printf("el valor del pasaje es de $3800"); 
        }  else 
        {
            printf("destino no valido");}
    }  else
        {printf("ingrese a que destino quiere ir (1,2,3)");
        scanf("%i", &destino3);
        if (destino3 == 1 )
        {
            printf("el valor del pasaje es de $3000");
        } else if (destino3 == 2)
        {
            printf("el valor del pasaje es de $2000");
        } else if (destino3 == 3)
        {
            printf("el valor del pasaje es de $2500"); 
        }  else 
        {
            printf("destino no valido");}
            
        }
          
        return 0;
}
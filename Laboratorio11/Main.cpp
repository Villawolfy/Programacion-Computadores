#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Agendas.h"

int main(){

    int opcion;
    FILE* agenda = fopen("ejemplo.txt", "w");
    char nombreArchivo[20];
    char nombre[20];
    char apellido[20];
    char telefono[20];
     
    while (opcion != 6)
    {   
        opcion = menu();
    switch (opcion)
    {
    case 1:
        printf("Agendas disponibles:\n");
        Archivos();
        system("ls *.txt");
        break;
        
    case 2:
    printf("Ingrese el nombre del archivo que quiere crear:\n");
    scanf("%s", nombreArchivo);
    strcat(nombreArchivo, ".txt");
        agenda = fopen("ejemplo.txt", "w");
        printf("Archivo creado exitosamente\n");
        fclose(agenda);
        break;
    case 3: Archivos();
            printf("Ingrese el nombre de la agenda que quiere revisar:\n");
            scanf("%s", nombreArchivo);
            strcat(nombreArchivo, ".txt");
            printf("Ingrese el nombre del usuario\n");
            scanf("%s", nombre);
            printf("Ingrese el apellido del usuario\n");
            scanf("%s", apellido);
            printf("Ingrese el numero del usuario\n");
            scanf("%s", telefono);
            agenda = fopen(nombreArchivo, "r");
            fclose(agenda);
            break;
    case 4: Archivos();
            printf("Ingrese el nombre de la agenda que quiere editar:\n");
            scanf("%s", nombreArchivo);
            strcat(nombreArchivo, ".txt");
            printf("Ingrese el nombre del contacto:\n");
            scanf("%s", nombre);
            printf("Ingrese el apellido del contacto:\n");
            scanf("%s", apellido);
            printf("Ingrese el teléfono del contacto:\n");
            scanf("%s", telefono);
            agenda = fopen(nombreArchivo, "a");
            fprintf(agenda, "%s %s %s\n", nombre, apellido, telefono);
            fclose(agenda);  
            break;
    case 5: Archivos();
        scanf("%s", nombreArchivo);
        strcat(nombreArchivo, ".txt");  
        remove(nombreArchivo);
        printf("La agenda %s ha sido eliminada correctamente!\n", nombreArchivo);
        break;
    case 6:
        break;
    default:
    printf("Porfavor, ingrese una opcion valida\n");
    scanf("%i", &opcion);
        break;
    }
        }
        return 0;
    }

#include <stdio.h>
#include <stdlib.h>
#include "Agendas.h"
int menu() {
        int opcion;
    printf("--- Agendas de contactos ---\n");
    printf("1.- Listar agendas\n");
    printf("2.- Crear agendas\n");
    printf("3.- Mostrar registros de una agenda\n");
    printf("4.- Agregar registro en agenda\n");
    printf("5.- Eliminar agenda\n");
    printf("6.- Salir\n");
    scanf("%i", &opcion);
    return opcion;
}
void Archivos(){
        printf("Las agendas de contactos disponibles son:\n");
        system("ls *.txt");
}
#include <stdio.h>

char tablero[3][3];
int filas;
int columnas;
bool ganador = false;
int turnos = 0;

int main(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            tablero [i][j]= '-';
        }
    }
    printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);

    while(!ganador && turnos < 9){
         if(turnos%2 == 0){
            printf("Jugador X - Ingrese su jugada de la forma fila,columna(ej. 1,1):\n");
            scanf("%i,%i", &filas, &columnas);
            tablero[filas - 1][columnas - 1] = 'X'; 
        } else {
            printf("Jugador O - Ingrese su jugada de la forma fila,columna (ej. 1,1):\n");
            scanf("%i,%i", &filas, &columnas);
            tablero[filas - 1][columnas - 1] = 'O'; 
        }
    printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);
    if((tablero[0][0] == tablero[0][1]) && (tablero[0][1] == tablero[0][2]) && (tablero[0][0] != '-')){
            printf("ganaste!");
            ganador = true;
        }
    if((tablero[1][0] == tablero[1][1]) && (tablero[1][1] == tablero[1][2]) && (tablero[1][0] != '-')){
            printf("ganaste!");
            ganador = true;
        }
    if((tablero[2][0] == tablero[2][1]) && (tablero[2][1] == tablero[2][2]) && (tablero[2][0] != '-')){
            printf("ganaste!");
            ganador = true;
        }
    if((tablero[0][0] == tablero[1][0]) && (tablero[1][0] == tablero[2][0]) && (tablero[0][0] != '-')){
        printf("ganaste!");
        ganador = true;
        }
    turnos++;
    }   
    return 0;
}
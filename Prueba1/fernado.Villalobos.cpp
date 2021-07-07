#include <stdio.h>
char cuadra[10][10];
char robot;
char cardinal;
char N, S , E, O;
int tesoro;
int fila, columna;
int movimientorobot;
bool movimiento;
int main(){
       for(int i = 0 ; i < 10 ; i++){     //Escoge las filas
        for(int j = 0 ; j < 10 ; j++){    //Escoge las columnas
            cuadra[i][j] = 'X';
            }
               }
    printf ("Debemos encontrar tesoros en la siguiente zona\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[0][0], cuadra[0][1], cuadra[0][2], cuadra[0][3], cuadra[0][4], cuadra[0][5], cuadra[0][6], cuadra[0][7], cuadra[0][8], cuadra[0][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[1][0], cuadra[1][1], cuadra[1][2], cuadra[1][3], cuadra[1][4], cuadra[1][5], cuadra[1][6], cuadra[1][7], cuadra[1][8], cuadra[1][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[2][0], cuadra[2][1], cuadra[2][2], cuadra[2][3], cuadra[2][4], cuadra[2][5], cuadra[2][6], cuadra[2][7], cuadra[2][8], cuadra[2][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[3][0], cuadra[3][1], cuadra[3][2], cuadra[3][3], cuadra[3][4], cuadra[3][5], cuadra[3][6], cuadra[3][7], cuadra[3][8], cuadra[3][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[4][0], cuadra[4][1], cuadra[4][2], cuadra[4][3], cuadra[4][4], cuadra[4][5], cuadra[4][6], cuadra[4][7], cuadra[4][8], cuadra[4][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[5][0], cuadra[5][1], cuadra[5][2], cuadra[5][3], cuadra[5][4], cuadra[5][5], cuadra[5][6], cuadra[5][7], cuadra[5][8], cuadra[5][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[6][0], cuadra[6][1], cuadra[6][2], cuadra[6][3], cuadra[6][4], cuadra[6][5], cuadra[6][6], cuadra[6][7], cuadra[6][8], cuadra[6][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[7][0], cuadra[7][1], cuadra[7][2], cuadra[7][3], cuadra[7][4], cuadra[7][5], cuadra[7][6], cuadra[7][7], cuadra[7][8], cuadra[7][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[8][0], cuadra[8][1], cuadra[8][2], cuadra[8][3], cuadra[8][4], cuadra[8][5], cuadra[8][6], cuadra[8][7], cuadra[8][8], cuadra[8][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[9][0], cuadra[9][1], cuadra[9][2], cuadra[9][3], cuadra[9][4], cuadra[9][5], cuadra[9][6], cuadra[9][7], cuadra[9][8], cuadra[9][9]);
  
   
    if (movimientorobot%2 == 0)
   {
    printf ("determine en que coordenadas empezara el robot (ejemplo 1,1)\n");
    scanf("%i,%i", &fila, &columna);   
    }
   cuadra[fila-1][columna-1] = 'O';
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[0][0], cuadra[0][1], cuadra[0][2], cuadra[0][3], cuadra[0][4], cuadra[0][5], cuadra[0][6], cuadra[0][7], cuadra[0][8], cuadra[0][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[1][0], cuadra[1][1], cuadra[1][2], cuadra[1][3], cuadra[1][4], cuadra[1][5], cuadra[1][6], cuadra[1][7], cuadra[1][8], cuadra[1][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[2][0], cuadra[2][1], cuadra[2][2], cuadra[2][3], cuadra[2][4], cuadra[2][5], cuadra[2][6], cuadra[2][7], cuadra[2][8], cuadra[2][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[3][0], cuadra[3][1], cuadra[3][2], cuadra[3][3], cuadra[3][4], cuadra[3][5], cuadra[3][6], cuadra[3][7], cuadra[3][8], cuadra[3][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[4][0], cuadra[4][1], cuadra[4][2], cuadra[4][3], cuadra[4][4], cuadra[4][5], cuadra[4][6], cuadra[4][7], cuadra[4][8], cuadra[4][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[5][0], cuadra[5][1], cuadra[5][2], cuadra[5][3], cuadra[5][4], cuadra[5][5], cuadra[5][6], cuadra[5][7], cuadra[5][8], cuadra[5][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[6][0], cuadra[6][1], cuadra[6][2], cuadra[6][3], cuadra[6][4], cuadra[6][5], cuadra[6][6], cuadra[6][7], cuadra[6][8], cuadra[6][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[7][0], cuadra[7][1], cuadra[7][2], cuadra[7][3], cuadra[7][4], cuadra[7][5], cuadra[7][6], cuadra[7][7], cuadra[7][8], cuadra[7][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[8][0], cuadra[8][1], cuadra[8][2], cuadra[8][3], cuadra[8][4], cuadra[8][5], cuadra[8][6], cuadra[8][7], cuadra[8][8], cuadra[8][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[9][0], cuadra[9][1], cuadra[9][2], cuadra[9][3], cuadra[9][4], cuadra[9][5], cuadra[9][6], cuadra[9][7], cuadra[9][8], cuadra[9][9]);
    
     while (!movimiento && 2 <= movimientorobot <= 10 ) {
         printf("ahora determine hacia donde se dirijira el robot a buscar tesoros\n");
         printf("recuerde que solo puede ser hacia Norte, Sur, Este, Oeste\n");
         printf("indique hacia donde se dirijira el robot, indicando cantidad de movimiento, direccion con la letra cardinal en Mayusculas\n");
         printf("ejemplo (5,S)\n");
         scanf("%i,%c", &movimientorobot, &cardinal);
         if (cardinal = N)
         {
          cuadra[fila][columna-movimientorobot] = 'O';
         } else if (cardinal=S)
         {
            cuadra[fila][columna+movimientorobot] = 'O';
         } else if (cardinal=E)
         {
            cuadra[fila+movimientorobot][columna] = 'O';
         } else if (cardinal=O)
         {
             cuadra[fila - movimientorobot][columna] = 'O';
         }
         else{
             printf("movimiento no valido\n");
         }
         movimientorobot++;
     }
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[0][0], cuadra[0][1], cuadra[0][2], cuadra[0][3], cuadra[0][4], cuadra[0][5], cuadra[0][6], cuadra[0][7], cuadra[0][8], cuadra[0][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[1][0], cuadra[1][1], cuadra[1][2], cuadra[1][3], cuadra[1][4], cuadra[1][5], cuadra[1][6], cuadra[1][7], cuadra[1][8], cuadra[1][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[2][0], cuadra[2][1], cuadra[2][2], cuadra[2][3], cuadra[2][4], cuadra[2][5], cuadra[2][6], cuadra[2][7], cuadra[2][8], cuadra[2][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[3][0], cuadra[3][1], cuadra[3][2], cuadra[3][3], cuadra[3][4], cuadra[3][5], cuadra[3][6], cuadra[3][7], cuadra[3][8], cuadra[3][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[4][0], cuadra[4][1], cuadra[4][2], cuadra[4][3], cuadra[4][4], cuadra[4][5], cuadra[4][6], cuadra[4][7], cuadra[4][8], cuadra[4][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[5][0], cuadra[5][1], cuadra[5][2], cuadra[5][3], cuadra[5][4], cuadra[5][5], cuadra[5][6], cuadra[5][7], cuadra[5][8], cuadra[5][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[6][0], cuadra[6][1], cuadra[6][2], cuadra[6][3], cuadra[6][4], cuadra[6][5], cuadra[6][6], cuadra[6][7], cuadra[6][8], cuadra[6][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[7][0], cuadra[7][1], cuadra[7][2], cuadra[7][3], cuadra[7][4], cuadra[7][5], cuadra[7][6], cuadra[7][7], cuadra[7][8], cuadra[7][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[8][0], cuadra[8][1], cuadra[8][2], cuadra[8][3], cuadra[8][4], cuadra[8][5], cuadra[8][6], cuadra[8][7], cuadra[8][8], cuadra[8][9]);
    printf("-----------------------------------------------------------------\n");
    printf("%c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c\n", cuadra[9][0], cuadra[9][1], cuadra[9][2], cuadra[9][3], cuadra[9][4], cuadra[9][5], cuadra[9][6], cuadra[9][7], cuadra[9][8], cuadra[9][9]);
    
    return 0;
}
#include <stdio.h>

float tarea1;
float tarea2;
float tarea3;
float act;
float prueba1;
float prueba2;
int main(){
    printf("ingrese tarea 1:\n");
    scanf("%f",&tarea1);
    printf("ingrese tarea 2:\n");
    scanf("%f",&tarea2);
    printf("ingrese tarea 3:\n");
    scanf("%f",&tarea3);
    printf("ingrese nota actitudinal:\n");
    scanf("%f",&act);
    printf("ingrese prueba 1:\n");
    scanf("%f",&prueba1);
    prueba2=4-(((tarea1+tarea2+tarea3+act)*0.1)+(prueba1*0.25)/0.35);
    printf ("la nota que necesitas para aprobar es %f\n", prueba2);
}
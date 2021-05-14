#include <stdio.h>
#include <math.h>

float radio;
float perimetro;
float area;
float pi;
int main (){
    printf ("ingrese el radio del circulo>\n");
    scanf("%f", &radio);
    perimetro = M_PI*2*radio;
    area = M_PI*pow(radio,2);
    printf("el area del circulo es: %f\n",area);
    printf("el perimetro del circulo es: %f\n",perimetro);  
}
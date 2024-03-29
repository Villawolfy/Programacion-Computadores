#include <stdio.h>

//prototipos
int ejemplo(int a, int b);
void imprimirMenu();
void imprimirOpciones();
int suma(int numero1, int numero2);
int resta(int numero1, int numero2);
int multiplicacion(int numero1, int numero2);
int division(int numero1, int numero2);
float division(float numero1, float numero2);
int calculadora(int operacion, int numero1, int numero2);

//variables
int opcion;
int numero1;
int numero2;
int resultado;

int main(){
    
    int ejemplo = 4; // Variable local a la funcion main
    // Menu
    imprimirMenu();
    
    // Opciones
    imprimirOpciones();
    printf("Seleccione la operacion que desea realizar:\n");
    scanf("%i", &opcion);
    // Pedir numeros
    printf("Ingrese el primer numero:\n");
    scanf("%i", &numero1); 
    printf("Ingrese el segundo numero:\n"); 
    scanf("%i", &numero2); 
    if ((opcion == 4) && (numero2 == 0))
    {
        printf("Syntax error");
    }else if ((opcion == 4) && (numero2 != 0))
    {
    printf("El resultado es: %i\n", calculadora(opcion, numero1, numero2));
    }
    //seleccion de operacion           
     else
    {
    printf("El resultado es: %i\n", calculadora(opcion, numero1, numero2));
    }   
    return 0;
}
void imprimirMenu(){
    printf("-------------------\n");
    printf("-------------------\n");
    printf("-----CALCULADORA----\n");
    printf("-------------------\n");
    printf("-------------------\n");
}

void imprimirOpciones(){
    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("3.- Multiplicacion\n"); 
    printf("4.- Division\n");
}

int calculadora(int operacion, int numero1, int numero2){
    switch(operacion){
        case 1: return suma(numero1, numero2);
        
        case 2: return resta(numero1, numero2);
                
        case 3: return multiplicacion(numero1, numero2);

        case 4: return division(numero1, numero2);

        default: return -1;
    }
}
int suma(int numero1, int numero2){
    int resultado = numero1 + numero2;
    return resultado;
}


int resta(int numero1, int numero2){
    int resultado = numero1 - numero2;
    return resultado;
}


int multiplicacion(int numero1, int numero2){
    int resultado = numero1 * numero2;
    return resultado;
}

float division(float numero1, float numero2){
    
    float resultado = numero1 / numero2;
    return resultado;
}

int division(int numero1, int numero2){

    int resultado = numero1 / numero2;
    return resultado;
}
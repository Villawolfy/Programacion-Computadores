 #include <stdio.h>

 float numero1;
 float numero2;
 float multiplicacion;
 int main (){
     printf("escriba un numero decimal que quiera multiplicar:\n");
     scanf("%f",&numero1);
     printf("ingrese un segundo numero:\n");
     scanf("%f",&numero2);
     multiplicacion= numero1*numero2;
     printf("el resultado de la multiplicacion es %f\n", multiplicacion);
 }

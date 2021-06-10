#include <stdio.h>

 int primoso;
 int numero;
 int primo;
 int num;
int main(){

    printf( "Ingrese hasta que numero quiere ver sus antecesores primos\n" );
    scanf("%d", &num);
    for (numero = 2 ; numero <= num  ; numero++){
        primo = 1;
        primoso = 2;
    while (primoso <= numero / 2 && primo){
            if(numero % primoso == 0)
                primo = 0;
                primoso++; 
          }
            if ( primo )
            printf("%d",numero);
      }
      return 0;
}
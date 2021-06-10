#include <stdio.h>

int num;
int a=0;
int b=1;
int c;
int main(){
printf("ingrese un numero mayor a 0:\n");
scanf("%i",&num);
printf("los siguientes numeros son en fibonacci:\n");
for(int i= 1; i <= num; i++) {
c=a+b;
a=b;
b=c;
printf("%i\n",c);
    }
    return 0;
}
#include <stdio.h>
float nota;
int main(){
    printf ("ingrese su nota:\n");
    scanf ("%f", &nota);
    if (( nota >= 1.0 ) && (nota < 4))
    {
        printf("su nota %f es insuficiente\n", nota);
    }else if (nota<5)
    {
        printf("su nota %f es suficiente\n", nota);
    } else if (nota <6)
    {
        printf("su nota %f esta bien\n", nota);
    } else if (nota < 7)
    {
        printf("su nota %f esta muy bien\n", nota);
    }
    return 0;
}
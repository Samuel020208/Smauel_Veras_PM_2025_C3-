#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 0.0;
    float b = 0.0;
    printf("\nIngresa el Numero para calcular la raiz cuadrada:");
    scanf("%f",&x);
    b = x;
    while(!(b== (x/b)))//verdadero es todo lo que no es 0
    {
        b = 0.5 * ((x/b)+b);
    }
    printf("\nLa raix cuadrada de %f es %f",x,b);
    return 0;
}

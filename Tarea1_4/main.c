#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, prom; // prom tiene que ser float -10

    printf("Introduzca un valor: ");
    scanf("%i",&a);
    printf("Introduzca otro valor: ");
    scanf("%i", &b);
    printf("Introduzca el valor final: ");
    scanf("%i", &c);
    prom = (a + b +c)/3;
    printf("El promedio de los valores introducidos es:%i", prom);

    return 0;
}

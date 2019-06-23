#include <stdio.h>
#include <stdlib.h>
//Primavera   1 marzo hasta 31 mayo
//Verano      1 junio hasta 31 agosto
//Otoño       1 septiembre hasta 30 noviembre
//Invierno    1 diciembre hasta 28 febrero
int main()
{
    int dia, mes;
    printf("Digite el dia: ");
    scanf("%d", &dia);
    printf("Digite el mes: ");
    scanf("%d", &mes);

if (
        (mes>3||(mes==3 && dia>=1)) // mes>3 sera positivo para todos los meses mayores que 3. Esto trae resultados errorneos -15
        ||
        ((mes==5 && dia<=31))
        )
    {
    printf("Es Primavera!\n");
    }

if (
        (mes>6||(mes==6 && dia>=1))
        ||
        ((mes==7 && dia<=31))
        )
    {
    printf("Es Verano!\n");
    }


if (
        (mes>8||(mes==8 && dia>=1))
        ||
        ((mes==11 && dia<=31))
        )
    {
    printf("Es Otoño!\n");
    }

if (
        (mes==12 && dia>=1)
        ||
        ((mes==2 && dia<=28))
        )
    {
    printf("Es Invierno!\n");
    }
}

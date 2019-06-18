#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

float promedio(float,int);

int main()
{

   char resp = 's';
   do{

   int usernum[999],cont1 = 0;
   float suma = 0;
   float total = 0;
   float cuadra;
      do{
         printf("Ingrese un n%cmero:",163);
         scanf("%d",&usernum[cont1]);

         suma += usernum[cont1];
         cont1++;

         do{

            printf("Otro numero? (S)i o (N)o: \n");
            resp = tolower(getche());

         }while (resp != 's' && resp != 'n');

         printf("\n");
        system("CLS");
      }while ( resp == 's');
      printf("           Num        Num-Prom     Num-Prom^2");

      for (int cont = 0;cont < cont1; cont++)
      {
         float resta = usernum[cont]-promedio(suma,cont1);
        cuadra = resta * resta;

         total += cuadra;
         printf("\n%5.d",cont+1);
         printf("%10.d|  %10.2f|  %10.2f|",usernum[cont],resta,cuadra);
      }
      printf("\n\nTotal: %.2f %26.2f\n",suma,total);
      printf("Promedio: %.2f %24.2f\n",promedio(suma,cont1),total/cont1);
      printf("\nDesviaci%cn estandar: %.2f\n\n",162,sqrt(total/cont1));
      do{

         printf("%cDesea volver a empezar? (S)%c o (N)o: ",168,161);
         resp = tolower(getche());

      }while (resp != 's' && resp != 'n');

      printf("\n");

   }while ( resp == 's');

   return 0;
}
float promedio(float suma,int cont1)
{
   float prom;
   prom = suma/cont1;
   return prom;
}


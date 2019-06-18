#include <stdio.h>
#include <stdlib.h>

void welcome();
void rand_mines(char msweep[12][12]);
void printmatrix(char msweep[12][12],int r,char user_chart[12][12]);
int process(char msweep[12][12],int r,int c,char user_chart[12][12]);

int main() {
   printf("                   BIENAVENTURADOS TODOS A UN BUSCAMINA QUE TA DE TO!\n\n");
   printf("Damas y caballeros, todas estas son las minas fijas. Evite hacer bum, que no vamo a limpiar. Gracias.\n");
char msweep[12][12] = {{'0'}};
int i,r,c;
char user_chart[12][12] = {{'0'}};

 rand_mines(msweep);

  printf("Introduce la localizacion (x y). Juiga!\n");
  scanf("%d%d",&r,&c);

              printmatrix(msweep,12,user_chart);

 i = process(msweep,r,c,user_chart); //returns 1 or 0,1 is notmine 0 = mine

  while(i == 1)
   {
     printf("Ma cheposo, tu no pasa en A como quiera.\n");
     printf("Detente, %c mina a lo lao. \n\n",msweep[r][c]);

     printmatrix(msweep,12,user_chart);

     printf("Siguiente turno...(Solo 1 - 11) ");
     scanf("%d%d",&r,&c);
     i=0;

     i = process(msweep,r,c,user_chart);


   }

  if(i==0)
   printf("\n Tu ve? Pol tar de necio hicite BUM. Se acabo er juego, vaya con Dio\n");

return 0;

}

void rand_mines(char msweep[12][12])  {
int r,c,m;

 for(m=0;m<20;m++)

  {
   r = rand() % 13;
   c = rand() % 13;

   msweep[r][c] = '9';
  printf("%d %d \n",r,c);
  }
return;

}
void printmatrix(char msweep[][12],int r,char user_chart[12][12])
{

int i,j;

printf("  .A.B.C.D.E.F.G.H.I.J.K.M.\n");

 for(i=1;i<r;i++)
  {
   printf(".|.");

   for(j=1;j<12;j++)
    {
     printf("%c ",user_chart[i][j]);
    }
   printf(".|.\n");
  }
printf("  .A.B.C.D.E.F.G.H.I.J.K.M.\n");

return;
}

int process(char msweep[12][12],int r,int c,char user_chart[12][12])
{

 int i=r,j=c,b=0,k;
 char C;

 if(msweep[r][c] == '9')
 {  k=0;
   return k;
 }
 else
  {
   if(msweep[i-1][j-1] == '9')
    b++;
   if(msweep[i-1][j] == '9')
    b++;
   if(msweep[i-1][j+1] == '9')
    b++;
   if(msweep[i][j-1] == '9')
    b++;
   if(msweep[i][j+1] == '9')
    b++;
   if(msweep[i+1][j-1] == '9')
    b++;
   if(msweep[i+1][j] == '9')
    b++;
   if(msweep[i+1][j+1] == '9')
    b++;

 C = (char)(((int)'0')+b);
   msweep[r][c] = C;
   user_chart[r][c] = C;
  }
 return 1;
}

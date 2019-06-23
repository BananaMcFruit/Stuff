#include <stdio.h>
#include <stdlib.h>
int p(int a, int b);
int main()
{
    int a, b,res;
        printf("Introduzca el primer valor:");
        scanf("%d", &a);
        printf("Introduzca el segundo valor:");
        scanf("%d", &b);
        res = p(a,b);
        printf("El resultado es %d",res);
        return 0;
}
    int p(int a, int b){
    if (a==b) return 0;
    if (a>b) return -1;
     int ga = 2*a-3;
     int fa = 3*a+2;
     int rga = p(ga,b);
     int rfa = p(fa,b);
    if (rga == -1&&fa== -1) return -1;
    if (rfa == -1) return rga+1;
    if (rga == -1) return rfa+1;
    if (rfa>rga) return rga; return rfa+1; //hay que sumarle 1 a rga -10
}

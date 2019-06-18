#include <stdio.h>
#include <stdlib.h>

int main()
{
   int code;
    printf("Introduzca uno de los codigos de estado (100-103): \n");
    scanf("%i", &code);

    switch(code){
        case 100: printf("Secuencia adquirida: Continue\n");
          break;
        case 101: printf("Secuencia adquirida: Switching Protocols\n");
          break;
        case 102: printf("Secuencia adquirida: Processing... (WebDav)\n");
          break;
        case 103: printf("Secuencia adquirida: Early Hints (RFC 8297\n");
          break;
    }
         return 0;
}

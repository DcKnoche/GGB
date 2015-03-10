#include <stdio.h>
#include <stdlib.h>
main(void)
{
   char digitobase[17] =
     {'0', '1', '2', '3', '4', '5', '6', '7',
      '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G'};
   int numeroconvertido[64];
   int numeroaconvertir;
   int numerosiguiente, base, indice=0;
   printf("Mete el numero y la base deseada: ");
   scanf("%d %i", &numeroaconvertir, &base);
   while (numeroaconvertir != 0)
   {
     numeroconvertido[indice] = numeroaconvertir % base;
     numeroaconvertir = numeroaconvertir / base;
     ++indice;
   }
   --indice;
   printf("\n\n Numero convertido = ");
   for(  ; indice>=0; indice--)
   {
     printf("%c", digitobase[numeroconvertido[indice]]);
   }
   printf("\n");
}

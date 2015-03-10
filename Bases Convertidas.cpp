#include <stdio.h>
#include <stdlib.h>
void main(void)
{
   char base_digits[17] =
     {'0', '1', '2', '3', '4', '5', '6', '7',
      '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G'};

   int numeroconvertido[64];
   long int numeroaconvertir;
   int numerosiguiente, base, indice=0;

   /* Agarra el numero y la base */
   printf("Mete el numero y la base deseada: ");
   scanf("%ld %i", &numeroaconvertir, &base);

   /* Convertimos el numero */
   while (numeroaconvertir != 0)
   {
     numeroconvertido[index] = numeroaconvertir % base;
     numeroaconvertir = numeroaconvertir / base;
     ++indice;
   }

   /* Imprimimos el resultado */
   --indice;
   printf("\n\n Numero convertido = ");
   for(  ; indice>=0; indice--) /* Echamos para atras el arreglito */
   {
     printf("%c", base_digits[numeroconvertido[indice]]);
   }
   printf("\n");
}

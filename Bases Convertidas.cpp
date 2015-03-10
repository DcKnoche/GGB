#include <stdio.h>
#include <stdlib.h>
#include<iostream>
   int numerosiguiente, base, indice=0;
   int numerotransformado[64];
   int numeroatransformar;
   char digitobase[17] =
     {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G'};
main(void){
	using namespace std;
    cout<<"Introdusca numero a transforma: ";
    cin>> numeroatransformar;
    cout<<"Introdusca Base:";
    cin>> base; 
    while (numeroatransformar != 0)
   {
     numerotransformado[indice] = numeroatransformar % base;
     numeroatransformar = numeroatransformar / base;
     ++indice;
   }
   --indice;
   cout<<"\n\n Numero transformado = ";
   for(  ; indice>=0; indice--) 
   {
   cout<<("%c", digitobase[numerotransformado[indice]]);
	 }
   cout<<"\n";
}

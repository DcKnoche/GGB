#include <stdio.h>
#include <stdlib.h>
#include<iostream>
   int base, indice=0;
   int numtrans[64];
   int numatrans;
   char digitobase[17] =
     {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G'};
main(void){
	using namespace std;
    cout<<"Introdusca numero a transformar: ";
    cin>> numatrans;
    cout<<"Introdusca Base:";
    cin>> base; 
    while (numatrans != 0)
   {
     numtrans[indice] = numatrans % base;
     numatrans = numatrans/ base;
     ++indice;
   }
   --indice;
   cout<<"\n\n Numero transformado = ";
   for(  ; indice>=0; indice--) 
   {
   cout<<("%c", digitobase[numtrans[indice]]);
	 }
   cout<<"\n";
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<iostream>
   int op, base, indice=0;
   int numerotransformado[64];
   int numeroatransformar;
   char digitobase[17] =
     {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G'};
main(void){
	using namespace std;
	case1:
	system("cls");
cout<<"Bienvenido a CambiaTuBaseConEstilo3000 \n";
cout<<"Eliga una opcion: \n";
cout<<"1. Introducir un numero \n";
cout<<"2. Salir :( \n";
cin>>op;
switch (op)
{
	case 1: 
	system("cls");
    cout<<"Introdusca numero a transformar: ";
    cin>> numeroatransformar;
    cout<<"Introdusca Base(Por falta de presupuesto, solo de base 2 a 17, gracias, la gerencia):";
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
   cout<<"Volver al menu principal? (1. Si 2. No)";
   cin>>op;
   if(op==1){
   goto case1;
   }
   else{
   goto case2;
   }
   break;
   case 2: 
   case2:
   exit ( 0 );
   break;
}
}

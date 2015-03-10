//Made by: Heradocles Montero C.I:23.736.217 and Luis Mendez C.I:23.885.310

#include <stdio.h>
#include <stdlib.h>
#include<iostream>
   int op, base, indice=0;
   int numtrans[0];
   int numatrans;
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
    cout<<"Introdusca numero a transformar(Entre 2147483647 y -2147483648, o habra riesgo de LOOP)";
    cin>> numatrans;
    retorno1:
    cout<<"Introdusca Base(Por falta de presupuesto, solo de base 2 a 17, gracias, la gerencia): ";
    cin>> base; 
    if (base>17 || base<2){
	cout<<"Base no disponible \n";
    goto retorno1;
	}
    else{    
	while (numatrans != 0)
   {
     numtrans[indice] = numatrans % base;
     numatrans = numatrans / base;
     ++indice;
   }
   --indice;
   cout<<"\nNumero transformado = ";
   for(  ; indice>=0; indice--) 
   {
   cout<<("%c", digitobase[numtrans[indice]]);
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
	}
   case 2: 
   case2:
   exit ( 0 );
   break;
}
}

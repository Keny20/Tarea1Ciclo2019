/*Hecho por:::: Keny Lisbeth Chavez Torres
carne:::: CT18009
Ejericio #3*/

#include <iostream> //libreria obligatoria
#include <windows.h>   //libreria que nos permitira el uso de puntero
#include <stdio.h>
#include <conio.h>
#include <math.h>           //libreria matematica

using namespace std ;

void menorAcero ()
{
	int n1 ;  //variable para el primer numero
	int n2 ;     //variable para el segundo numero
	int *punt  ; //puntero
	
	cout << "Ingrese el primer numero: " << endl;
	cin >> n1 ;  //lectura de variable
	cout << "Ingrese el segundo numero: "   << endl ;
	cin >> n2 ;    //lectura de variable
	
	if (n1 < n2 )
	{
		 punt = &n1 ; //almacenamiento de tama;o en memoria del primer numero en el puntero
		 n1 = *punt ;      //el primer numero sera el valor almacenado en el puntero
		 *punt = 0  ;
		 		 /*si el menor es el 1, se imprimira el valor en el puntero
		 y la simplemente impresion del numero mayor*/
		cout << "El numero menor es: " << *punt << endl ;
		cout << "El numero mayor es: " << n2 << endl ;
	}
		else 
	{
		 punt = &n2 ;   //almacenamiento de tama;o en memoria del segundo numero en el puntero
		 n2 = *punt ;    //el segundo numero sera el valor almacenado en el puntero
		 *punt = 0 ;		 
		 		 /*si el menor es el 2, se imprimira el valor en el puntero
		 y la simplemente impresion del numero mayor*/
		cout << "El numero menor es: " << *punt << endl ;
		cout << "El numero mayor es: " << n1 << endl ;
	}
}

//principal funcion
//cuerpo del sistema
int main ()   

{    
	menorAcero () ; //llamada a funcion
	system ("pause") ;  //pausa
 	return 0;         //no retorna ningun valor
}  
		
	

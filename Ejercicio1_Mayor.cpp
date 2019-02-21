/*Hecho por:::: Keny Lisbeth Chavez Torres
carne:::: CT18009
Ejericio #1*/

#include <iostream> //libreria obligatoria
#include <windows.h>   //libreria que nos permitira el uso de puntero
#include <stdio.h>
#include <conio.h>

using namespace std ;

/*crearemos una funcion para la ejecucion de nuestro
sistema*/
void mayor ()
{
	int n1 ;  //variable para el primer numero
	int n2 ;     //variable para el segundo numero
	int *punt; //puntero
 
	cout << "Ingrese el primer numero: " << endl;
	cin >> n1 ;  //lectura de variable
	cout << "Ingrese el segundo numero: "   << endl ;
	cin >> n2 ;    //lectura de variable
		 
 /*cree un tipo de condicion para determinar el numero
 mayor
 si el numero uno es mayor que el numero dos se hace el proceso*/
	if ( n1 > n2 )
	{
		
		 punt = &n1 ; //almacenamiento de tama;o en memoria del primer numero en el puntero
		 n1 = *punt ;      //el primer numero sera el valor almacenado en el puntero
		 
		 /*si el mayor es el 1, se imprimira el valor en el puntero
		 y la simplemente impresion del numero menor*/
		cout << "El numero mayor es: " << *punt << endl ;
		cout << "El numero menor es: " << n2 << endl ;
	}
	/*sino se cumple la funcion anterior*/
	else 
	{
		 punt = &n2 ;   //almacenamiento de tama;o en memoria del segundo numero en el puntero
		 n2 = *punt ;    //el segundo numero sera el valor almacenado en el puntero
		 		 
	  /*si el mayor es el 2, se imprimira el valor en el puntero
		 y la simplemente impresion del numero menor*/
		cout << "El numero mayor es: " << *punt << endl ;
		cout << "El numero menor es: " << n1 << endl ;
	}	
}

//principal funcion
//cuerpo del sistema
int main ()   

{    
	mayor (); //llamada de funcion
	system ("pause") ;  //pausa
 	return 0;         //no retorna ningun valor
}  

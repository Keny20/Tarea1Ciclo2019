/*Hecho por:::: Keny Lisbeth Chavez Torres
carne:::: CT18009
Ejericio #3*/

#include <iostream> //libreria obligatoria
#include <windows.h>   //libreria que nos permitira el uso de puntero
#include <stdio.h>
#include <conio.h>
#include <math.h>           //libreria matematica

using namespace std ;

/*la primera funcion que cree
se utilizo para el area del cubo*/
void area1 ()
{
	double  lado ;  //lado del cubo
	double cubo ;     //calculo
	double *total ;     //puntero
	
	total = &cubo ;      //almacenamiento e el puntero de la memoria de la variable 
	cubo = *total ;       //cubo igualado al puntero
	
	cout << "Ingrese el lado del cubo:  " ;
	cin >> lado ;      //lectura de variable
	cout << endl ;
	
	/*calculo matematico
	el valor del lado elevado al cuadrado y
	luego multiplicado por 6*/
	cubo  = ( pow (lado, 2)) * 6;
	
	cout << "El area es: " << cubo << endl ;     //resultado
	
}

/*la segunda funcion que cree
se utilizo para el area del cuadrado*/
void area2 ()
{
	double lado ;         //lado del cuadrado
	double cuad ;         //calculo
	double *total ;         //puntero
	
	total = &cuad ;    //almacenamiento e el puntero de la memoria de la variable 
	cuad = *total ;      //cuad igualado al puntero

	cout << "Ingrese el lado del cuadrado:  " ;
	cin >> lado ;       //lectura de variacle
	cout << endl ;
	
	/*el calculo solo consiste en multiplicar 
	el lado por el mismo*/
	cuad = lado * lado ;
	cout << "El area es: " << cuad << endl;   ///resultado
}	
//principal funcion
//cuerpo del sistema
int main ()   

{    
	int opcion ;      //opcion del menu
	
	cout << "\t\tBIENVENIDO" << endl ;
	cout << "Que base desea encontrar? " << endl ;
	cout << "1-Cubo\n2-Cuadrado " << endl << endl ;
	cout << "Ingrese Opcion 1 o 2: " ;
	cin >>opcion ; //lectura de variable
	
	/*se creo un menu para saber cual de las dos
	opciones se quiere calcular*/
	switch (opcion )
	{
		case 1 :
			area1 ();     //llamada de funcion 1
		break ;
		case 2 :
			area2 () ;         //llamada de funcion 2
		break ;
	}
		
	system ("pause") ;  //pausa
 	return 0;         //no retorna ningun valor
}  

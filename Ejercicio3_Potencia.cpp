/*Hecho por:::: Keny Lisbeth Chavez Torres
carne:::: CT18009
Ejericio #3*/

#include <iostream> //libreria obligatoria
#include <windows.h>   //libreria que nos permitira el uso de puntero
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std ;

/*creamos una funcion llamada potencia
aqui haremos el proceso del ejercicio */
int potencia ()
{
	double base ;     //tipo dato double para la base, para un mayor rango
	int n ;           //elevacion
	double total ;    //total
	double *resultado ;  //puntero
	
	resultado = &base ;    ////almacenamiento e el puntero de la memoria de la variable 
	base = *resultado ; //bas igualada al puntero
	
	cout << "Ingrese la base: "   ;
	cin >> base ; //lectura de variable
	cout << endl << "Ingrese la potencia: "  ;
	cin >> n ;   //lectura de variable

	/*la variable total hacemos el proceso
	matematico que se nos pide*/
	total = pow (base, n) ;
	
	cout << "El resultado de " << base << " elevado a la " << n << " es: " << total << endl ;
 	return total ;              //retorna el valor total
}

//principal funcion
//cuerpo del sistema
int main ()   

{           
		potencia ();   //llamada de funcion
	
	system ("pause") ;  //pausa
 	return 0;         //no retorna ningun valor
}  	
	

/*Hecho por:::: Keny Lisbeth Chavez Torres
carne:::: CT18009
Ejericio #2*/

#include <iostream> //libreria obligatoria
#include <windows.h>   //libreria que nos permitira el uso de puntero
#include <stdio.h>
#include <conio.h>
using namespace std;

/*creamos una funcion de tipo int para
el proceso de nuestro sistema*/
int multi ( int num)   //aqui declaramos la variable principal
{
	int *total  ;//puntero
	int resul ; //variable auxiliar para el puntero
	total = &num ;   //almacenamiento e el puntero de la memoria de la variable numero
	num = *total ;    //el valor del numero se le asigna al puntero
	resul = num * 10 ;     //variable auxiliar ejecutando el proceso de nuestro sistema
	return resul ;    //retornamos el resultado de la ejecucion del problema
}
//principal funcion
//cuerpo del sistema
int main ()
{
	int n ;    //declaramos variable para el ingreso del numero a multiplicar
	int funcion ; //varible para llamada de funcion
	  cout << "Ingrese el numero a multiplicar por 10: " ;
	  cin >>  n ; //lectura de variable
	  
	  funcion = multi (n) ; //llamamos y almacenamos la funcion en esta variable, con la asignacion de la variable con la que ingresaremos un numeero
	 
	  cout << "El resultado es: " << funcion ;   //impresion de resultado
	  cout << endl ;
	  system ("pause") ; //pausa
	  return 0 ; //no retorna
}

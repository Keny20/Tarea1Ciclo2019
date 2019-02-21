/*Hecho por Chavez Torres, Keny Lisbeth 
CT18009
Ordenar palabra de forma inversa*/

#include <iostream>
#include<windows.h>

using namespace std ;

int main ()
{
    char *cadena = "UES"  ;    //se declara la cadena con la palabra a desordenar
    cout << cadena << endl ;     //se llama la variable
    cout << "Forma Inversa: " << endl ;
    cout << cadena [2] << cadena [1] << cadena [0] << endl ;   //impresion de forma inversa en tipo arreglo
    
    system ("pause") ;        //pausa
    return 0 ;                //no retorna
}


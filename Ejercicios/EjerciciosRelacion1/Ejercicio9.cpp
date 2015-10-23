/*Ejercicio 9.

    Programa para intercambiar el contenido de dos variables.


    Seria imposible hacer este ejercicio sin una variable auxiliar, para
    ello he utilizado variableDeCambio*/

#include <iostream>
using namespace std;
int main (){

  int edad_Pedro, edad_Juan, variableDeCambio=0;

  cout<<"Introduzca la edad de Pedro: ";
  cin>> edad_Pedro;

  cout<< "Introduzca la edad de Juan: ";
  cin>> edad_Juan;

  variableDeCambio = edad_Pedro;
  edad_Pedro = edad_Juan;
  edad_Juan = variableDeCambio;

  cout<< "La edad de Pedro ahora es: "<< edad_Pedro << " y la edad de Juan es: "
  << edad_Juan << endl;

}

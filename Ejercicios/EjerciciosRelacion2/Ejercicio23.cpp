/* Ejercicio 5.
    Muestre la poblacion dentro de dos años considerando la poblacion
    actual sabiendo los nacimientos, muertes y emigraciones*/

#include <iostream>
using namespace std;
int main(){


  int poblacionActual, anios, poblacionFinal,contador=0,poblacionEnUnAnio,
   nacimientos, muertes, emigrantes;
  const double NACIM = 1.87, MUERT= 3.27, EMIGR= 71.9,SEGUNDOSPORANIO=31536000;

  cout<< "Introduzca la poblacion actual: "<< endl;
  cin>> poblacionActual;

  cout<< "Introduzca el numero de poblacion que habra: "<< endl;
  cin>> poblacionFinal;


  nacimientos = SEGUNDOSPORANIO / NACIM;
  muertes = SEGUNDOSPORANIO / MUERT;
  emigrantes = SEGUNDOSPORANIO / EMIGR;

  poblacionEnUnAnio = nacimientos - muertes - emigrantes;


  cout << "La poblacion en un año se incrementa: "<< poblacionEnUnAnio << endl;

  while (poblacionActual < poblacionFinal){
        poblacionActual = poblacionActual + poblacionEnUnAnio;
        contador++;
 }


  cout<< "Pasaran "<< contador <<" años para alcalzar la poblacion de "<< poblacionFinal << endl;
}

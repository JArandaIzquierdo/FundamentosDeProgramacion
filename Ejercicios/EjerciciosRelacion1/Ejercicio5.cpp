/* Ejercicio 5.
    Muestre la poblacion dentro de dos años considerando la poblacion
    actual sabiendo los nacimientos, muertes y emigraciones*/

#include <iostream>
using namespace std;
int main(){


  int poblacionActual, anios ;
  double segundosAnios;
  double nacimientos, muertes, emigrantes, poblacionEnAnios;
  const double NACIM = 1.87, MUERT= 3.27, EMIGR= 71.9;

  cout<< "Introduzca la poblacion actual: "<< endl;
  cin>> poblacionActual;

  cout<< "Introduzca los años a transcurrir: "<< endl;
  cin>> anios;


  segundosAnios = anios * 365.25*24*60*60;
  cout<< "Existen " << segundosAnios << " segundos en "<< anios << " años" << endl;

  nacimientos = segundosAnios / NACIM;
  muertes = segundosAnios / MUERT;
  emigrantes = segundosAnios / EMIGR;

  poblacionEnAnios = poblacionActual + nacimientos - muertes - emigrantes;

  cout<< "El numero de nacimientos sera de: "<< nacimientos << endl;
  cout<< "El numero de muertes sera de: "<< muertes << endl;
  cout<< "El numero de emigrantes sera de: "<< emigrantes << endl;

  cout<< "La poblacion en "<< anios <<" años sera de: "<< poblacionEnAnios << endl;
}

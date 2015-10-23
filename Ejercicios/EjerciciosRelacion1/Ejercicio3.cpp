#include <iostream>
using namespace std;
int main(){

  double millas,kilometros;

  cout<< " Introduzca la longitud en millas a convertir en kilometros: "<< endl;
  cin>> millas;

  kilometros =  millas * 1.609;

  cout<< "La distancia en kilometros es de: "<< kilometros << endl;
}

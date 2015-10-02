#include <iostream>
using namespace std;
int main(){

  const int poblacionActual= 1375570814;
  double segundosDosAnios=0;
  double nacimientos=0, muertes=0, emigrantes=0, poblacionEnDosAnios=0;

  segundosDosAnios = 2*365*24*60*60;
  cout<< "Existen " << segundosDosAnios << " segundos en 2 años" << endl;

  nacimientos = segundosDosAnios / 1.87;
  muertes = segundosDosAnios / 3.27;
  emigrantes = segundosDosAnios / 71.9;

  poblacionEnDosAnios = poblacionActual + nacimientos - muertes - emigrantes;

  cout<< "El numero de nacimientos sera de: "<< nacimientos << endl;
  cout<< "El numero de muertes sera de: "<< muertes << endl;
  cout<< "El numero de emigrantes sera de: "<< emigrantes << endl;

  cout<< "La poblacion en dos años sera de: "<< poblacionEnDosAnios << endl;
}

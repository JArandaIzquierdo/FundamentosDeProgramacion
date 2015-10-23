#include <iostream>
#include <cmath>
using namespace std;
int main (){

  double media, desviacion, gaussiana=0, xAbscisa;
  const double PI = 3.1415927, E = 2.7182;

  cout<< "Introduzca los valores de la media, desviacion y abscisa: "<<endl;

  cout<< " Media: ";
  cin>> media;

  cout<< " Desviacion: ";
  cin>> desviacion;

  cout<< " Abscisa: ";
  cin>> xAbscisa;

  gaussiana = ((1 / (desviacion * sqrt (2 * PI))) * //Primera division
              (pow (E,(( -1.0 / 2.0 ) * //e elevado a 1/2
                  pow (((xAbscisa - media) / desviacion), 2))))); // por lo demas

  cout<< "El valos de la funcion gaussiana es de: "<< gaussiana << endl;
}

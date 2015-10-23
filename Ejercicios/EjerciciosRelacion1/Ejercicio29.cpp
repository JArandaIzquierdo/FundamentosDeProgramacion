#include <iostream>
#include <cmath>
using namespace std;
int main (){

  double x1, y1, x2, y2, distancia;

  cout<< "Introduzca las coordenades de P1: " << endl << " X1: ";
  cin >> x1;
  cout<< " Y1: ";
  cin >> y1;

  cout<< "Introduzca las coordenades de P2: " << endl << " X2: ";
  cin >> x2;
  cout<< " Y2: ";
  cin >> y2;

  distancia = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));

  cout<< "La distancia euclidea entre P1 y P2 es: " << distancia << endl;
}

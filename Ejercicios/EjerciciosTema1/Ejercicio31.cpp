#include <iostream>
using namespace std;
int main (){

  double distancia, v1, v2, tiempo, d1, d2;

  cout << "Introduzca la distancia que separa los dos trenes: ";
  cin >> distancia;

  cout << "Introduzca la velocidad del primer tren: ";
  cin >> v1;

  cout << "Introduzca la velocidad del segundo tren: ";
  cin >> v2;

  tiempo = distancia / ( v1 + v2);
  d1 = v1 * tiempo;
  d2 = v2 * tiempo;

  cout << "El tiempo que habra pasado antes de que choque es de: " << tiempo << endl;
  cout << "La distancia recorrida por el primer tren antes de chocar sera: " <<
        d1 << endl;
  cout << "La distancia recorrida por el segundo tren antes de chocar sera: " <<
        d2 << endl;
}

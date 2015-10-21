#include <iostream>
#include <cmath>
using namespace std;
int main (){

  double lado1, lado2, angulo, area;
  const double PI=3.1415;

  cout << "Introduzca el primer lado del triangulo: ";
  cin >> lado1;

  cout << "Introduzca el segundo lado del triangulo: ";
  cin >> lado2;

  cout << "Introduzca el angulo del triangulo: ";
  cin >> angulo;

  angulo = (angulo * PI) / 180;
  area = (1.0/2.0) * lado1 * lado2 * sin(angulo);

  cout << "El area del angulo es: " << area << endl;
}

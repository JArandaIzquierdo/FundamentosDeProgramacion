#include <iostream>
using namespace std;
int main (){

  double celsius, fahrenheit;

  cout << "Introduzca la temperatura en grados Celsius: ";
  cin >> celsius;

  fahrenheit = (celsius * 180 / 100) + 32;

  cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << endl;
}

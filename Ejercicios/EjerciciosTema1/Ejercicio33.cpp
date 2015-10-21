#include <iostream>
#include <cmath>
using namespace std;
int main (){

  int n, numeroNecesarios;

  cout << "Introduce un numero: ";
  cin >> n;

  numeroNecesarios = log2(n) + 1 ;

  cout << "El numero minimo de digitos necesarios es de: " << numeroNecesarios << endl;
}

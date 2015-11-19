#include <iostream>
using namespace std;
int main(){

      int n,factorial=1;
      double x, potencia=1;

      cout<< "Introduzca el numero n: ";
      cin >> n;

      cout << "Introduzca el numero x: ";
      cin >> x;

      for (int i=1;i <= n; i++){
            factorial = factorial * i;
      }
      for (int i=1; i <= n; i++){
            potencia = potencia * x;
      }

      cout << x << " elevado a "<< n << ": " << potencia <<endl;
      cout << "El factorial de "<< n << " es: "<< factorial << endl;

}

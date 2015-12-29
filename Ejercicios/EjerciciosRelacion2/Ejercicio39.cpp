#include <iostream>
using namespace std;
int main(){

      int numero, k, c;

          cout << "Introduzca numeros(-1 para terminar): ";
          cin >> numero;

          while (numero != -1) {
              k = numero;
              c = 1;
              while (numero != -1 && k == numero) {
                  cin >> numero;
                  if (k == numero) {
                      c++;
                  }
              }
              cout << c << " " << k << " ";
        }
}

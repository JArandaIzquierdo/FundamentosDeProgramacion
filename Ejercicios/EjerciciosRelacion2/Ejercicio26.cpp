#include <iostream>
using namespace std;
int main(){
      int dato, menorPrimeraCadena;
      bool sonMayores=true;

      cout << "Introduce un dato en la primera cadena: ";
      cin >> dato;

      menorPrimeraCadena = dato;

      while (dato != 0){
            if(dato < menorPrimeraCadena)
                  menorPrimeraCadena = dato;

            cout << "Intruduce otro dato en la primera cadena: ";
            cin>> dato;
      }

      cout<< "Intruduce un dato en la segunda cadena: ";
      cin>> dato;

      while (dato != 0){
            if(menorPrimeraCadena < dato)
                  sonMayores = false;

            cout<< "Intruduce otro dato en la segunda cadena: ";
            cin>> dato;
      }

      if(sonMayores == false)
            cout << "NO, no todos los digitos de la cadena 1 son mayores"<<endl;
      else
            cout << "SI, todos son mayores"<<endl;
}

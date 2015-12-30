#include <iostream>
using namespace std;
int main(){

      char caracter;
      int contadorEspacios=0, contadorTabulaciones=0, contadorNuevaLinea=0;

      cout<<"Introduce un caracter: ";
      cin>>caracter;

      while(caracter != '.'){
            if(caracter == ' ')
                  contadorEspacios++;
            if(caracter == '\t')
                  contadorTabulaciones++;
            if(caracter == '\n')
                  contadorNuevaLinea++;

            cout<<"Introduce un caracter: ";
            cin>>caracter;
      }
      cout<<"Hay "<< contadorEspacios << " espacios, "<< contadorTabulaciones <<
            " tabulaciones y "<< contadorNuevaLinea << " nuevas lineas"<< endl;
}

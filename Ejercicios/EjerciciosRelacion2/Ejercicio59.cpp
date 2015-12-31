#include <iostream>
#include <cmath>
using namespace std;
int main(){

      int numeroGrande, numeroPeque, copiaGrande, resto;
      bool encontrado=false;

      cout<< "Introduzca un numero: ";
      cin>> numeroGrande;

      cout<<"Introduzca un numero de dos cifras: ";
      cin>>numeroPeque;

      copiaGrande = numeroGrande;

      while(!encontrado && copiaGrande > 0){
            resto = copiaGrande%100;
            if(resto == numeroPeque)
                  encontrado=true;
            copiaGrande = copiaGrande / 10;
            cout<<copiaGrande<<endl;
      }
      if(encontrado==true)
            cout<< "El pequeño esta contenido en el grande"<<endl;
      else
            cout<<"El pequeño NO esta contenido en el grande"<<endl;

}

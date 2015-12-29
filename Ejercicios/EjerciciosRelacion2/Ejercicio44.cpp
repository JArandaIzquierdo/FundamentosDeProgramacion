#include <iostream>
using namespace std;
int main(){

      int numero, espacios;

      cout << "Introduce el numero de la base: ";
      cin>> numero;

      espacios = numero / 2;

      for (int i=1; i <= numero; i=i+2){

            //Numero de espacios a la izquierda
            for (int j=1; j <= espacios; j++){
                  cout<<" ";
            }
            //Numero de x
            for(int x = 1; x <= i; x++){
                   cout<< "x";
             }

             //Numero de espacios a la derecha
            for(int d=1; d <= espacios; d++){
                  cout<<" ";
            }
            cout<<endl;
            espacios--;

      }

      for (int c=1; c <=2; c++){
            for(int v=1; v<= numero/3; v++){
                  cout<<" ";
            }
            for(int t=1; t<= numero/3; t++){
                  cout<<"x";
            }
            for(int k=1; k<= numero/3; k++){
                  cout<<" ";
            }
            cout<<endl;
      }
}

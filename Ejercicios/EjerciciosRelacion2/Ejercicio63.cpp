#include <iostream>
using namespace std;
int main(){

      int multiplicando, multiplicador,total, copiaMultiplicando, copiaMultiplicador;

      cout << "Intruduzca el multiplicando: ";
      cin>> multiplicando;

      cout<<"Introduzca el multiplicador: ";
      cin>>multiplicador;

      copiaMultiplicando = multiplicando;
      copiaMultiplicador = multiplicador;

      while(multiplicando >= 1){


            if(multiplicando % 2 != 0)
                  total = total + multiplicador;

            multiplicador = multiplicador * 2;
            multiplicando = multiplicando / 2;
      }

      cout<<copiaMultiplicando<< " x " << copiaMultiplicador<< " = " << total<<endl;
}

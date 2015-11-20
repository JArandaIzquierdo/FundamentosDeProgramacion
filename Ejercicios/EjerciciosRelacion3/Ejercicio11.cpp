#include <iostream>
using namespace std;

int CalcularDivisores(int n){
      int divisores=0;
      for (int i=2; i< n;i++){
            if (n % i == 0)
                  divisores=divisores + i;
                  //cout << "Divisor " << di << endl;
      }
      return divisores;
}


bool SonAmigos(int numero1, int numero2){

      int divisores1=CalcularDivisores(numero1)+1;
      int divisores2=CalcularDivisores(numero2)+1;

      if(divisores1 == numero2 && divisores2 == numero1)
            return true;
      else
            return false;
      }



int main(){

      int numero1, numero2;
      bool amigos;

      cout << "Introduzca el primer nuemro: ";
      cin >> numero1;

      cout << "Introduzca el segundo numero: ";
      cin >> numero2;

      amigos= SonAmigos(numero1, numero2);

      if(amigos == false){
            cout << "Los numeros no son amigos"<<endl;
            exit(0);
      }
      if (amigos == true)
            cout << "Los numeros son amigos"<<endl;

}

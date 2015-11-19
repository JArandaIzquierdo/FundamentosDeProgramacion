#include <iostream>
using namespace std;
int main(){

      int n,numero,i,contador=0;

      cout << "Intruduzca un numero: ";
      cin >> n;

      numero=n;

      while(n > 0){
            n = n%i;
            i = i*10;
            contador++;
      }


      cout << "numero: " << numero << endl;
      cout << "contador: " << contador << endl;

}

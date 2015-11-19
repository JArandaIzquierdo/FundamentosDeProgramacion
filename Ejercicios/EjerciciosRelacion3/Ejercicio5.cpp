#include <iostream>
using namespace std;

bool LeeOpcion2Alternarivas (char v){

      if(v == s || v == S)
            return true;
      else if(v == n || v == N)
            return false;
      else {
            cout << "El caracter no es correcto"<<endl;
            exit(0);
      }
}
int main(){
      char volar;
      bool quiereVolar;
      cout << "Quieres aprender a volar?";
      cin >> volar;

      quiereVolar=LeeOpcion2Alternarivas(volar);

}

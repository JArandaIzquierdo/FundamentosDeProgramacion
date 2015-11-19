#include <iostream>
using namespace std;

bool LeeOpcion2Alternarivas (){
      char volar;
      cout << "Quieres aprender a volar?";
      cin >> volar;

      if(volar == s || volar == S)
            return true;
      else if(volar == n || volar == N)
            return false;
      else {
            cout << "El caracter no es correcto"<<endl;
            exit(0);
      }
}

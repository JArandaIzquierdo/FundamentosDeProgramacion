#include <iostream>
using namespace std;
int main (){

  char letra_Original, letra_Convertida;

  cout << "Introduzca un caracter: ";
  cin >> letra_Original;

  if (letra_Original >= 'A' && letra_Original <= 'Z'){
    cout << "La letra introducida es mayuscula" << endl;
    letra_Convertida = letra_Original + 32;
    cout << "La letra miniscula correspondiente es: " << letra_Convertida << endl;

  }
  else if (letra_Original >= 'a' && letra_Original <='z'){
    cout << "La letra introducida es minuscula" << endl;
    letra_Convertida = letra_Original - 32;
    cout << "La letra mayuscula correspondiente es: " << letra_Convertida << endl;
  }

  else{
    cout << " No es una letra" << endl;
    letra_Convertida = letra_Original;
    cout << " El caracter o numero es el mismo: " << letra_Convertida << endl;
  }

}

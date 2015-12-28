#include <iostream>
using namespace std;
int main(){

      int numero1=0, numero2=0, resultado=0;
      char letra;

      cout<< "-------------------------------"<< endl <<
            "I.   Introducir numeros" << endl <<
            "S.   Suma" << endl <<
            "P.   Producto" << endl <<
            "M.   Maximo" << endl <<
            "R.   Salir" << endl <<
            "--------------------------------" << endl <<
            " Introduzca una opcion: ";

      cin>> letra;
      cout << endl << endl << endl;

      while (letra != 'R'){

            if(letra == 'I'){
                  cout << "Intruduzca el primer numero: ";
                  cin >> numero1;

                  cout << "Intruduzca el segundo numero: ";
                  cin >> numero2;

                  cout << endl << endl << endl;
            }

            if (letra == 'S'){
                  resultado = numero1 + numero2;
            }

            if (letra == 'P'){
                  resultado = numero1 * numero2;
            }

            if(letra == 'M'){
                  if(numero1 > numero2)
                        resultado = numero1;
                  else if (numero1 < numero2)
                        resultado = numero2;
            }
            if (letra == 'I')
                  cout << "Valores introducidos"<<endl<<endl<<endl;

            else if (letra == 'M' && numero1 == numero2)
                  cout << "Los dos numeros son iguales, no hay un maximo"<<endl<<endl<<endl;
            else
                  cout << "El resultado de la operacion es: "<< resultado << endl << endl << endl;



            cout<< "-------------------------------"<< endl <<
                  "I.   Introducir numeros" << endl <<
                  "S.   Suma" << endl <<
                  "P.   Producto" << endl <<
                  "M.   Maximo" << endl <<
                  "R.   Salir" << endl <<
                  "--------------------------------" << endl <<
                  " Introduzca una opcion: ";

            cin>> letra;
            cout << endl << endl;

      }
      cout << "Programa termindo"<<endl;
}

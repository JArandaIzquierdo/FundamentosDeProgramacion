#include <iostream>
using namespace std;
int main (){

      int incognita, numero;
      char letra;
      bool encontrado;


      cout<< "---------------------" << endl <<
            "N.   Nuevo Juego " << endl <<
            "S.   Salir " << endl <<
            "----------------------" << endl <<
            "Introduzca una opcion: ";
            cin >> letra;
            cout << endl << endl;

      while (letra != 'S'){
            //Empezamos un nuevo juego
            if (letra == 'N'){

                  cout<<"Introduce una incognita: ";
                  cin>>incognita;


                  cout << "Introduce un numero: ";
                  cin >> numero;

                  while(numero != -1 && encontrado == false){
                        // Si el numero escrito esta entre 0 y 100

                              if(numero < incognita)
                                    cout<<"El numero introducido es menor"<<endl;

                              else if(numero > incognita)
                                    cout << "El numero intruducido es mayor"<<endl;

                              else if(numero == incognita){
                                          encontrado=true;
                                    }

                        if(encontrado == false){

                              cout << "Introduce un numero: ";
                              cin >> numero;
                        }
                  }
                  cout << endl << endl;
                  if(encontrado == true)
                        cout << "Has adivinado el numero, era el numero "<< numero << endl << endl;
                  else
                        cout << "Has abandonado el juego"<< endl << endl;


            }
            encontrado=false;
            cout<< "---------------------" << endl <<
                  "N.   Nuevo Juego " << endl <<
                  "S.   Salir " << endl <<
                  "----------------------" << endl <<
                  "Introduzca una opcion: ";
                  cin >> letra;
                  cout << endl << endl;
      }
      cout << "Has salido del programa" << endl << endl << endl;

}

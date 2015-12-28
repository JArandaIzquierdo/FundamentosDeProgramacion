#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main (){
      const int MIN = 1,MAX = 100;
      const int NUM_VALORES = MAX-MIN + 1;

      int incognita, numero;
      time_t tiempo;
      char letra;
      bool encontrado;

      // Inicialización de la secuencia:
      srand(time(&tiempo));

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

                  // Generación de un número aleatorio incognita:
                  // MIN <= incognita <= MAX
                  incognita = (rand() % NUM_VALORES) + MIN;
                  encontrado=false;//Ponemos encontrado a false

                  cout << "Introduce un numero: ";
                  cin >> numero;

                  while(numero != -1 && encontrado == false){
                        // Si el numero escrito esta entre 0 y 100
                        if((numero >= 0 && numero <= 100)){

                              if(numero < incognita)
                                    cout<<"El numero introducimo es menor"<<endl;

                              else if(numero > incognita)
                                    cout << "El numero intruducido es mayor"<<endl;

                              else if(numero == incognita){
                                          encontrado=true;
                                    }

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
                        cout << "Has abandonado el jeugo"<< endl << endl;


            }
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

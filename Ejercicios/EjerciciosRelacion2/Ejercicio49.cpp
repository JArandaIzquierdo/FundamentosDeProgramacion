#include <iostream>
#include <cmath>
using namespace std;
int main (){

      double esperanza, desviacion, gaussiana=0, xAbscisa;
      const double PI = 3.1415927, E = 2.7182;
      char letra1, letra2;
      int max, min, incremento;

      cout<<      "-----------------------------------------------------"<<endl<<
                  "P.   Introducir los parametros de la funcion (esperanza y desviacion)"<<endl<<
                  "S.   Salir del programa"<<endl<<
                  "-----------------------------------------------------"<< endl << endl;
      cin>>letra1;
      if(letra1 == 'S')
            cout << "El programa ha terminado"<<endl;


      // Si la letra no es S
      while(letra1 != 'S'){


            // Si la letra es P
            if (letra1 == 'P'){
                  //Intrducimos los valores de la esperanza y la decviacion
                  cout<< "Introduzca los valores de la esperanza y desviacion. "<<endl;
                  cout<< " Esperanza: ";
                  cin>> esperanza;

                  cout<< " Desviacion: ";
                  cin>> desviacion;
                  // Mostramos el siguiente menu
                  cout<<endl<<      "---------------------------------"<<endl<<
                                    "V.   Introducir varios valores de abcisas"<<endl<<
                                    "A.   Volver al menu anterior"<<endl<<
                                    "---------------------------------"<< endl << endl;
                  cin>>letra2;
            }
            while(letra2 != 'A'){
                  if(letra2 == 'V'){

                        cout<< "Introduzca un valor maximo: ";
                        cin>>max;

                        cout<<"Introduzca un valor minimo: ";
                        cin>>min;

                        cout<<"Introduzca el incremento: ";
                        cin>>incremento;

                        for (int i = min; i <= max; i= i+incremento){
                              gaussiana = ((1 / (desviacion * sqrt (2 * PI))) * //Primera division
                                            (pow (E,(( -1.0 / 2.0 ) * //e elevado a 1/2
                                                pow (((i - esperanza) / desviacion), 2))))); // por lo demas

                              cout<< "El valor de la funcion gaussiana con Esperanza "<< esperanza<<", Desviacion  "<< desviacion << " y abcisa "<< i <<
                              "es : "<< gaussiana << endl << endl;
                        }
                        cout<<endl<<      "---------------------------------"<<endl<<
                                          "V.   Introducir varios valores de abcisas"<<endl<<
                                          "A.   Volver al menu anterior"<<endl<<
                                          "---------------------------------"<< endl << endl;
                        cin>>letra2;
                  }

            }

            //Volvemos al menu principal
            cout<<      "----------------------------"<<endl<<
                        "P.   Introducir los parametros de la funcion (esperanza y desviacion)"<<endl<<
                        "S.   Salir del programa"<<endl<<
                        "----------------------------"<< endl << endl;

            cin>>letra1;
      }
}

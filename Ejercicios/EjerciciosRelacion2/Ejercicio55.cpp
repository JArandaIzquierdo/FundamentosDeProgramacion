#include <iostream>
using namespace std;
int main (){

      int dorsal, puntos, equipo1=0, equipo2=0;

      cout<< "Introduce el dosal del jugador: ";
      cin>>dorsal;

      cout<<"Introduce el numero de puntos: ";
      cin>>puntos;

      while( dorsal != -1){
            if( dorsal == 1 || dorsal == 2 || dorsal == 3)
                  equipo1 = equipo1 + puntos;

            else if(dorsal == 4 || dorsal == 5 || dorsal == 6)
                  equipo2 = equipo2 + puntos;

            else
                  cout<< "El dorsal introducido no pertenece a ningun equipo"<<endl;

            cout<< "Introduce el dosal del jugador: ";
            cin>>dorsal;

            if( dorsal > 0 && dorsal < 7){

                  cout<<"Introduce el numero de puntos: ";
                  cin>>puntos;
            }
      }

      if(equipo1 > equipo2)
            cout << "Ha ganado el equipo 1"<< endl;
      else
            cout << "Ha ganado el equipo 2"<< endl;

}

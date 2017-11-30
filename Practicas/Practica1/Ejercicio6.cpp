#include <iostream>
using namespace std;
int main(){

    int horas;
    int minutos;
    int segundos;

    cout<< "Intrduzca numero de horas: "<< endl;
    cin>>horas;

    cout<< "Intrduzca numero de minutos: "<< endl;
    cin>>minutos;

    cout<< "Intrduzca numero de segundos: "<< endl;
    cin>>segundos;

    if(segundos > 59){
        minutos = minutos + (segundos/60);
        segundos = segundos % 60;
    }

    if(minutos > 59){
        horas = horas + (minutos/60);
        minutos = minutos % 60;
    }


    cout<<" Horas: "<< horas << "    Minutos: " << minutos << "    Segundos: "<< segundos<<endl;
}

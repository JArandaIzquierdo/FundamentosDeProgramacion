#include <iostream>
using namespace std;

class DepositoSimulacion{

private:
    double capital;
    int interes;

public:
    //Constructos
    DepositoSimulacion(double dinero, int inte){
        while(dinero < 0){
            cout<<"Capital incorrecto,vuelva a introducir el capital: ";
            cin>>dinero;
        }
        while(inte < 0 || inte > 100){
            cout<<"El interes tiene que estar entre un 0% y un 100%, introduzcalo de nuevo: ";
            cin>>inte;
        }
        capital = dinero;
        interes = inte;
    }

    //Calculamos el capital que tendremos en un numero de años dados sabiento el interes
    double calcularCapital(int anios){
        double total=capital;
        for(int i=1; i <= anios; i++){
            total = total + ((capital*interes)/100.0);
            cout <<"El capital en el año "<< i << " es de: "<<total<<endl;
        }
        return total;
    }

    //Calculamos los años que transcurriran hasta lograr el doble del capital
    int calcularAnios(double capital){

    }
};

int main(){

    int opcion=0,
        interes,
        anios;

    double capital,
            totalCapital;

    while(opcion != -1){
        cout<<"-----------------------------------------------------------"<<endl<<
            "1. Calcular nuevo capital dado un CAPITAL, NUMERO DE AÑOS y %"<<endl<<
            "2. Calcular numero de años para obtener el doble de un CAPITAL dado con un %"<<endl<<
            "-1. Salir"<<endl<<
            "-------------------------------------------------------------"<<endl;
            cin>>opcion;

            if(opcion == 1){
                cout<<"Introduce el capital inicial: ";
                cin>>capital;

                cout<<"Introduce el interes: ";
                cin>>interes;

                cout<<"Introduce el numero de años: ";
                cin>>anios;

                DepositoSimulacion deposito (capital,interes);

                totalCapital = deposito.calcularCapital(anios);

                cout<<"El total de capital en "<< anios << " años es de: "<< totalCapital << endl;

            }

    }


}

#include <iostream>
using namespace std;

class Nomina{
private:
    double ganancia,
            gananciaParcial,
            retencion;


public:
    Nomina(double dinero, double reten){
        while(dinero < 0){
            cout<<"La nomina no puede ser negativa, intruduzcala de nuevo:";
            cin>>dinero;
        }
        ganancia = dinero;
        gananciaParcial = ganancia / 5;
        while(reten < 0 || reten > 100){
            cout<<"El % de retencion no es correcto, introduzcalo de nuevo:";
            cin>>reten;
        }
        retencion = reten;
    }
    //Metodo para calcular la ganancia del diseñador
    void gananciaDiseniador(){
        double gananciaDiseniador;
        gananciaDiseniador = gananciaParcial * 2;
        gananciaDiseniador = gananciaDiseniador - ((retencion*gananciaDiseniador)/100);
        cout<<"La ganancia del diseñador es de: "<< gananciaDiseniador << endl;
    }
    //Metodo para calcular la ganancia de los fabricantes
    void gananciaFabricantes(){
        double gananciaFabricantes;
        gananciaFabricantes = gananciaParcial;
        gananciaFabricantes = gananciaFabricantes -((retencion*gananciaFabricantes)/100);
        cout<<"La ganancia de cada fabricante es de: "<< gananciaFabricantes << endl;
    }
};

int main(){

    double ganancias,retencion;

    cout<<"Introduce las ganancias de la empresa: ";
    cin>>ganancias;

    cout<<"Introduce el % de retencion: ";
    cin>>retencion;

    Nomina nomina1(ganancias,retencion);
    nomina1.gananciaDiseniador();
    nomina1.gananciaFabricantes();

}

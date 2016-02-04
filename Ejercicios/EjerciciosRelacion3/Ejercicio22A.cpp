#include <iostream>
using namespace std;

class Nomina{
private:
    double ganancia,
            gananciaParcial;


public:
    Nomina(double dinero){
        while(dinero < 0){
            cout<<"La nomina no puede ser negativa, intruduzcala de nuevo:";
            cin>>dinero;
        }
        ganancia = dinero;
        gananciaParcial = ganancia / 5;
    }
    //Metodo para calcular la ganancia del diseñador
    void gananciaDiseniador(){
        double gananciaDiseniador;
        gananciaDiseniador = gananciaParcial * 2;
        cout<<"La ganancia del diseñador es de: "<< gananciaDiseniador << endl;
    }
    //Metodo para calcular la ganancia de los fabricantes
    void gananciaFabricantes(){
        cout<<"La ganancia de cada fabricante es de: "<< gananciaParcial << endl;
    }
};

int main(){

    double ganancias;

    cout<<"Introduce las ganancias de la empresa: ";
    cin>>ganancias;

    Nomina nomina1(ganancias);
    nomina1.gananciaDiseniador();
    nomina1.gananciaFabricantes();

}

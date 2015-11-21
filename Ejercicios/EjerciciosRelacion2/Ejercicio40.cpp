#include <iostream>

using namespace std;

int main(){

    int anios, nAnios, interes;
    double capital;

    do{
     	cout << "Introduce el numero de anios: " ;
        cin >> anios;
    }while (anios <=0);

    do{
    	cout << "Introduce el interes entre 0 y 100: ";
        cin >> interes;
    }while (!(interes > 0 && interes <= 100));

    cout << "Introduce el capital: ";
    cin >> capital;
    nAnios = 1;

    for(int i=1; i<=interes;i++){
        cout << "Calculos realizados al " << i << "%" << endl;
        for(int j=1;j<=anios;j++){
            capital = capital +((capital*i)/100);
            cout << "   Total en el anio numero " << " " << j << " = " << capital << endl;
            }
    }
}

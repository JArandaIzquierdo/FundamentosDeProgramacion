#include <iostream>

using namespace std;

int main(){

    int anios, nAnios=0;
    double capital, interes;

    cout << "Introduce el numero de anios: ";
    cin >> anios ;
    cout << "Introduce el interes entre 0 y 100: ";
    cin >> interes;
    cout << "Introduce el capital: ";
    cin >> capital;

    nAnios = 1;

    while(nAnios <= anios ){

            capital = capital +(capital*(interes/100));

            cout << "Total en el anio numero " << " " << nAnios << " " << capital << endl;
            nAnios ++;
    }
}

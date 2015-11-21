#include <iostream>

using namespace std;

int main(){

    double capital, interes;

    cout << "Introduce el capital inicial: " << endl;
    cin >> capital;
    cout << "Introduce el interes anual entre 0 y 100: " << endl;
    cin >> interes;

    int nAnios = 0;
    int tope = capital * 2;

    while(capital <= tope){
            capital = capital +(capital*(interes/100));
            nAnios++;
    }
    cout << "El total de numeros de anios para doblar el capital es: " << nAnios << endl;
}


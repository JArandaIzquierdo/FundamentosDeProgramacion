#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a=0;
    int b=0;
    int c=0;
    double raiz1=0;
    double raiz2=0;

    cout<< "Intruduce el primer termino (a): "<< endl;
    cin>> a;

    cout<< "Intruduce el segundo termino (b): "<< endl;
    cin>> b;

    cout<< "Intruduce el tercer termino (c): "<< endl;
    cin>> c;

    raiz1 = (-b - (sqrt(pow(b,2) - (4 * a * c)))) / (2 * a);
    raiz2 = (-b + (sqrt(pow(b,2) - (4 * a * c)))) / (2 * a);

    cout<< "La primera raiz es: "<< raiz1 << endl;
    cout<< "La segunda raiz es: "<< raiz2 << endl;
}

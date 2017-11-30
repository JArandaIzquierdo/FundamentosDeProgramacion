#include <iostream>
using namespace std;
int main(){

    char letra;
    int ascii;
    char mayuscula;

    cout<< "Introduce una letra: "<<endl;
    cin>>letra;

    ascii=letra;
    mayuscula=letra - 32;

    cout<< "El codigo ASCII de la letra  "<< letra << " es: "<< ascii << endl;
    cout<< "La misma letra pero en mayuscula es: "<< mayuscula << endl;
}

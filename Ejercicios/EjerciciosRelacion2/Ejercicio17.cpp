#include <iostream>

using namespace std;

int main(){

    int a, b;
    bool se_dividen;
    int Divdo, Divsor;

    cout << "Introduce dos numeros enteros: ";
	cin >> a >> b;
	
	if (a%b==0){
		Divdo = a;
		Divsor = b;
		se_dividen = true;
	}if (b%a==0){
		Divdo = b;
		Divsor = a;
		se_dividen = true;
	}
	if (se_dividen)
		cout << Divsor << " divide a " << Divdo;
	else
		cout << "Los numeros no se dividen " << endl;

}


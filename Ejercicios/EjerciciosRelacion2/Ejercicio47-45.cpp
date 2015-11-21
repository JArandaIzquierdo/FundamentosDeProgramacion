#include <iostream>

using namespace std;

int main(){

    int inicial, tope;

    do{
    	cout << "Introduce un valor inicial ";
        cin >> inicial;
    }while(inicial < 0);

    do{
    	cout << "Introduce un valor tope ";
        cin >> tope;
    }while(tope <= inicial);

	for(int i=inicial; i<=tope; i++){
        cout << endl;
        for (int j=i; j<=tope; j++){
            cout << j << " ";
        }
	}
}

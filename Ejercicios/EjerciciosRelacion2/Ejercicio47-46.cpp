#include <iostream>

using namespace std;

int main(){

    int inicial, tope;

    do{
    	cout << "Introduce un valor inicial ";
        cin >> inicial;
    }while(inicial <= 0);

    do{
    	cout << "Introduce un valor tope ";
        cin >> tope;
    }while(tope <= inicial);

    int tope2=tope;

	for(int i=inicial; i<=tope2; i++){
        cout << endl;
        if(tope2 < tope+i){
            tope= tope+1;
            for (int j=i; j<tope; j++){
                cout << j << " ";
            }
        }
	}
}

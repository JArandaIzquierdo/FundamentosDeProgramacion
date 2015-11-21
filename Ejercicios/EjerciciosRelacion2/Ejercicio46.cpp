#include <iostream>

using namespace std;

int main(){

    int tope = 5;
    int tope2 = 11;

	for(int i=1; i<=tope; i++){
        cout << endl;
        if(tope<tope2){
            tope= tope+1;
            for (int j=i; j<=tope; j++){
                cout << j << " ";
            }
        }
	}
}

#include <iostream>

using namespace std;

int main(){

    char min_izda, max_izda, min_dcha, max_dcha;

    cout << "Introduce 4 valores: " << endl;
    cin >> min_izda >> max_izda >> min_dcha >> max_dcha;

    for(char i = min_izda; i <= max_izda; i++){
        for(char j = min_dcha; j <= max_dcha; j++){
            cout << i << j << " " ;
        }
        cout << endl;
    }
}

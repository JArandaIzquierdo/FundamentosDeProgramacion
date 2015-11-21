#include <iostream>

using namespace std;

enum class TipoLetra
        {mayuscula, minuscula, noAlfabetico};

int main(){

	char letra_original, letra_convertida;

    const int SALTO = 'a'-'A';

    TipoLetra tipo_letra;


    cout << "Introduce una letra: ";
    cin >> letra_original;


    if(letra_original >= 'A' && letra_original <= 'Z'){
        tipo_letra = TipoLetra::mayuscula;

    }else if(letra_original >= 'a' && letra_original <= '{z' ){
        tipo_letra = TipoLetra::minuscula;

    }else{
        letra_convertida = letra_original;
        tipo_letra = TipoLetra::noAlfabetico;
        }


    switch(tipo_letra){
        case TipoLetra::mayuscula:
                letra_convertida = letra_original + SALTO;
                cout << "La letra convertida es " << letra_convertida << ", la letra de entrada era una mayuscula " << endl;
                break;
        case TipoLetra::minuscula:
                letra_convertida=letra_original - SALTO;
                cout << "Letra convertida " << letra_convertida << ", la letra de entrada era una minuscula" << endl;
                break;
        case TipoLetra::noAlfabetico:
                cout << letra_convertida << ", no era un caracter alfabetico" << endl;
                break;

    }
}

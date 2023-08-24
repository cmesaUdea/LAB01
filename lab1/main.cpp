#include <iostream>

using namespace std;

//Funcion punto 1
bool esVocal(char caracter2){

    if(caracter2 == 'a' || caracter2 == 'A' ||caracter2 == 'E' ||caracter2 == 'e' ||caracter2 == 'I' || caracter2 == 'i' ||caracter2 == 'o' ||caracter2 == 'O' ||caracter2 == 'U' ||caracter2 == 'u'){
        return true;
    }

    else{
        return false;
    }

}

int main()
{
    int n = 1;


    switch (n){
    case 1:
        char caracter;
        bool vocal;
        cout << "Ha elegido el problema 1:" << endl;
        cout << "Problema 1. Escriba un programa que identique si un carácter ingresado es una vocal, una consonante o ninguna de las 2 e imprima un mensaje segun el caso" <<endl;
        cout << "Ingrese la vocal o consonante" << endl;
        cin >> caracter;

        if (caracter >= 'A' && caracter <= 'Z' || caracter >= 'a' && caracter <= 'z'){
            vocal = esVocal(caracter);


            if(vocal){
                cout << caracter << " es una vocal." << endl;
            }else{
                cout << caracter << " es una consonante" << endl;
            }

        }else{
            cout << "no es una letra" << endl;
        }

        break;






    case 2:
        cout << "Hola mundo 2" << endl;
        break;

    case 3:
        cout << "Hola mundo 3" << endl;
        break;
    }



    return 0;
}



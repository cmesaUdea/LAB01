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
    int n = 2;


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

        int money = 0, total = 0;
        cout << "Ha elegido el problema 2" << endl;
        cout << "Ingrese una cantidad de dinero:"<<endl;
        cin >> money;

        int cambio[10] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};

        for(int i = 0; i <= 10; i++){
            cout << cambio[i] << " : "<<money/cambio[i] << endl;
            money = money - ( (money/cambio[i]) * cambio[i]);
        }

        break;





    return 0;

    }
}




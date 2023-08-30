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

// Funciones punto 4
bool isHour(int hour){
    if(hour / 100 > 23){
        return false;
    }else if( hour % 100 > 59){
        return false;
    }else{
        return true;
    }
}



int main()
{
    int n = 2;


        cout << "Ingresa el numero del problema que desea observar:"<< endl;
        cin >> n;
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

        case 2:{

            int money = 0;
            cout << "Ha elegido el problema 2" << endl;
            cout << "Ingrese una cantidad de dinero:"<<endl;
            cin >> money;

            int cambio[10] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};

            for(int i = 0; i <= 10; i++){
                cout << cambio[i] << " : "<<money/cambio[i] << endl;
                money = money - ( (money/cambio[i]) * cambio[i]);

                if (money == 0 || money < 50){
                    cout << "Faltante: " << money<< endl;
                    break;
                }
            }

            break;
        }


        case 3:{

            int mes = 0, dia = 0;

            cout << "Usted ha elegido el problema 3:"<<endl;
            cout << "Ingrese el mes" << endl;
            cin >> mes;

            cout << "Ingrese el dia: " << endl;
            cin >> dia;

            if(mes == 12 || mes == 10 || mes == 8 || mes == 7 || mes == 5 || mes == 3 || mes == 1 ){

                if(dia >= 1 && dia <= 31){
                    cout << mes <<"/"<< dia << " es una fecha valida." << endl;
                }else{
                    cout << mes <<"/"<< dia << " es una fecha invalida." << endl;
                }

            }else if(mes == 4 || mes == 6 || mes ==9 || mes == 11 ){

                if(dia >= 1 && dia <= 30){
                    cout << mes <<"/"<< dia << " es una fecha valida." << endl;
                }else{
                    cout << mes <<"/"<< dia << " es una fecha invalida." << endl;
                }

            }else if( mes == 2){
                    if(dia == 28){
                        cout << mes <<"/"<< dia << " es valido en bisisesto." << endl;
                    }else if(dia >= 1 && dia <= 28){
                        cout << mes <<"/"<< dia << " es una fecha valida." << endl;
                    }else{
                        cout << mes <<"/"<< dia << " es una fecha invalida." << endl;
                    }


            }else{
                cout << mes <<"/"<< dia << " es una fecha invalida." << endl;
            }

            break;
        }

        case 4:{

            int hour = 0, duty = 0;

            cout << "Usted ha elegido el problema 3:"<<endl;
            cout << "Ingrese la hora en formato HH:MM" << endl;
            cin >> hour;
            cout << isHour(hour);

            if(isHour(hour) == 0){
                cout << hour << " es un tiempo invalido" << endl;
                break;
            }
            cout << "Ingrese la duracion de la hora en formato HH:MM" << endl;
            cin >> duty;

            if(isHour(duty) == 0){
                cout << duty << " es un tiempo invalido" << endl;
                break;
            }








        }
    }

    return 0;

}




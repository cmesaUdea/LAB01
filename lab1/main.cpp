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

void sumaHora(int hora, int duty){

    int horaHour = 0, minutosHour = 0, horaDuty = 0, minutosDuty = 0, horaFinal = 0, minutoFinal = 0;

    horaHour = hora / 100;
    minutosHour = hora % 100;

    horaDuty = duty / 100;
    minutosDuty = duty % 100;

    horaFinal = horaHour + horaDuty;
    if(horaFinal > 23){
        horaFinal = horaFinal % 24;
    }

    minutoFinal = minutosHour + minutosDuty;
    if(minutoFinal > 59){
        horaFinal = horaFinal + (minutoFinal / 60);
        minutoFinal = minutoFinal % 60;

    }

    cout << "la hora es : " << horaFinal << minutoFinal << endl;

}

//Función para punto 6
int factorial(int n){
    int facto = 1;
    if (n == 0){
        return 1;
    }else{
        for(int i = n ; i != 0; i--){
            facto *= i;
        }
        return facto;
    }
}

//Función para punto 7

int fibonacci(int lim){

    int a = 1, b = 1, c = 0;

    do{
        c = a + b;
        a = b;
        b = c;

    } while(a <= lim);

    return a;

}

int main()
{
    int n;
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


        case 3: {

            int mes = 0, dia = 0;

            cout << "Usted ha elegido el problema 3:"<<endl;
            cout << "Ingrese el mes" << endl;
            cin >> mes;

            cout << "Ingrese el dia: " << endl;
            cin >> dia;

            if(mes == 12 || mes == 10 || mes == 8 || mes == 7 || mes == 5 || mes == 3 || mes == 1 )
            {

                if(dia >= 1 && dia <= 31){
                    cout << mes <<"/"<< dia << " es una fecha valida." << endl;
                }else{
                    cout << mes <<"/"<< dia << " es una fecha invalida." << endl;
                }

            }else if(mes == 4 || mes == 6 || mes ==9 || mes == 11 )
            {

                if(dia >= 1 && dia <= 30)
                {
                    cout << mes <<"/"<< dia << " es una fecha valida." << endl;

                }else
                {
                    cout << mes <<"/"<< dia << " es una fecha invalida." << endl;
                }

            }else if( mes == 2)
            {

                    if(dia == 28){
                        cout << mes <<"/"<< dia << " es valido en bisisesto." << endl;
                    }else if(dia >= 1 && dia <= 28){
                        cout << mes <<"/"<< dia << " es una fecha valida." << endl;
                    }else{
                        cout << mes <<"/"<< dia << " es una fecha invalida." << endl;
                    }



            }else
            {
                cout << mes <<"/"<< dia << " es una fecha invalida." << endl;
            }

            break;
        }

        case 4: {

            int hour = 0, duty = 0;

            cout << "Usted ha elegido el problema 3:"<<endl;
            cout << "Ingrese la hora en formato HH:MM" << endl;
            cin >> hour;


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

            sumaHora( hour, duty );



        }
        case 5:{
            cout << " En proceso "<< endl;
            break;
        }
        case 6:{
            int aprox = 0;
            float total = 0;

            cout << "Usted ha elegido el problema 6: "<< endl;
            cout << " Ingrese el número de elementos usados en la apróximación: " << endl;
            cin >> aprox;


            for (int i = 0; i < aprox ; i++){

                total = total + (1.0 / factorial(i));

            }
            cout << total << endl;
            break;
        }

        case 7:{
            int lim = 0;
            cout << "Usted ha elegido el problema 7: "<< endl;
            cout << "Ingrese el número hasta el cual desea que se genere la serie de fibonacci: " << endl;
            cin >> lim;

            fibonacci(lim);

            cout << fibonacci(lim) << endl;

        }



    }
    return 0;

}




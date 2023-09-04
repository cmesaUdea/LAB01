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

//Funcion para el punto 9
int potencia (int base, int exponente)
{
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

//Funcion para el punto 10
bool primo(int enesimo){
    if (enesimo>1){
        for (int i=2;i<=enesimo;i++){
            if(enesimo%i==0 and i<enesimo){
                return false;
            }
        }
    }
    else
        return false;
    return true;
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
            int n = 0,k = 0;
            char ast = '*';

            cout<<"Ingrese un numero impar: "<<endl;
            cin>>n;

            int m=n/2;

            if (n%2==0){
                cout<<"Unicamente funciono con numeros impares"<<endl;
            }

            else{
                for(int i=0;i<n;i++){
                        //Parte arriba
                        if (i<=m){
                            for(int j=m;j>i;j--){//For para los espacios de la izquierda
                                cout<<" ";
                                k++;
                            }
                            for(int j=0;j<n-(2*k);j++){//For para los asteriscos
                                cout<<ast;
                            }
                            for(int j=m;j>i;j--){//For para los espacios de la derecha
                                cout<<" ";
                            }
                            cout<<endl;
                            k=0;
                        }
                        // Parte abajo
                        if(i>m){
                            for(int j=i;j>m;j--){//For para los espacios de la izquierda.
                                cout<<" ";
                                k++;
                            }
                            for(int j=0;j<n-(2*k);j++){//For para los asteriscos
                                cout<<ast;
                            }
                            for(int j=i;j>m;j--){//For para los espacios de la derecha
                                cout<<" ";
                            }
                            cout<<endl;
                            k=0;
                        }
                }
            }
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
            int n, a=1, b=1, c=0, sumatoria = 0;
            cout << "Ingrese un numero dentro de la serie de Fibonnacci : ";
            cin >> n;
            for(int i = 1; i < n;i++){
                if(i == 1){
                        c = b;
                        b += a;
                }
                else{
                        c = b;
                        b += a;
                        a = c;
                }
                if(b % 2 == 0){
                        sumatoria += b;
                }
                if(b >= n){
                        break;
                }
            }
            cout << "El resultado de la suma es: " << sumatoria << endl; //Imprime el resultado de la suma
            return 0;
            break;

        }
        case 8:{
            int a,b,c,m1=0,m2=0,suma=0,menor=0,mayor=0;
            cout << "ingresa el primer numero: " << endl;
            cin>>a;
            cout<<" ingresa el segundo numero: "<<endl;
            cin>>b;
            cout<<" ingresa el tercer numero: "<<endl;
            cin>>c;
            while(a<c and b<c){
                for (int i =1;i<=c;i++){
                        if (a<=b)
                            menor=a;
                        mayor=b;
                        if (a>=b){
                            menor=b;
                            mayor=a;
                        }
                        m1=menor*i;
                        if (m1<c){
                            suma=suma+m1;
                            cout<<m1<<"+";
                        }
                        else{
                            break;
                        }
                        m2=mayor*i;
                        if (m2<c and m2%menor !=0){
                            suma=suma+m2;
                            cout<<m2<<"+";
                        }
                }
                cout<<"="<<suma<<endl;
                return 0;
                break;
            }
        }

        case 9:{
            {
                {
                        int numero, digito, suma = 0;

                        // Pedir al usuario que ingrese un número entero
                        cout << "Ingrese un numero: "<<endl;
                        cin >> numero;

                        // Iterar a través de cada dígito del número y sumar su potencia
                        int temp = numero;
                        while (temp != 0) {
                            digito = temp % 10; // Obtener el último dígito
                            suma += potencia(digito, digito); // Sumar la potencia del dígito a la suma
                            temp /= 10; // Eliminar el último dígito del número
                        }

                        // Imprimir el resultado de la suma
                        cout << "El resultado de la suma es: " << suma << endl;
                }
                break;

            }
        }
        case 10:{
            bool esPrimo = false;
            int enesimo=0,i=1,c=0;
            cout<<"Ingrese el enesimo numero primo que desea saber: "<<endl;
            cin>>enesimo;
            while(c < enesimo){
                i++;
                esPrimo = primo(i);
                if(esPrimo == 1)
                {
                        c++;
                }
            }
            cout<<"El primo numero "<<enesimo<<" es "<<i<<endl;
            break;
        }




    }
    return 0;

}




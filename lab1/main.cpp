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

//Funcion para el punto 16
int seriecollatz(int m){
    int modulo=0;
    int conta=0;
    while (m!=1){
        modulo = m%2;
        if (modulo == 0){
            conta+=1;
            m=m/2;
        }

        if (modulo!=0){
            conta+=1;
            m=(3*m)+1;
        }
    }
    conta+=1;
    return conta;
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
        case 11:{
            {
                int entero, ban, MCM; //Declaración de variables
                cout << "Ingrese el numero: ";
                cin >> entero; //Asigna la captura a la variable entero
                for(int i = (entero*2); i > 0; i++){ //Declara e inicializa la variable i en el valor de la variable entero multiplicado por dos, termina cuando i sea menor o igual a 0, incrementa i de 1 en 1
                        ban = 1; // le asigna el numero 1 a la variable ban
                        for(int t = 1; t<=entero; t++){ //Declara e inicializa la variable t en 1, termina cuando el valor de t sea mayor que el valor de entero, incrementa t de 1 en 1
                            if(i%t!=0){ //Si el residuo de la división i/t es diferente de 0, haga lo sigiente:
                                ban = 0; // Le asigna el número 0 a la variable ban
                                break;} //Rompe el ciclo
                        }
                        if(ban==1){ //Si la variable ban es igual a 1
                            MCM = i; //A la variable MCM le asigna el valor de i
                            break; //Rompe el ciclo
                        }
                }
                cout << "El minimo comun multiplo es: " << MCM << endl; //Imprime el minimo común múltiplo
                break;

            }
        }
        case 12:{
            {
                int entero, primo = 1, ban, maximo; //Declaración de variables
                cout << "Ingrese el numero entero: ";
                cin >> entero; //Guarda la captura en la variable entero
                for(int i=2;i < entero;i++){ //Declara e inicializa la variable i en 2, termina cuando i sea mayor que entero e incrementa la variable i de uno en uno
                        ban = 1; // Le asigna el numero 1 a la variable ban
                        if(i<10){ //Si i es menor que diez, haga lo siguiente:
                            for(int t = 2;t < i; t++){ //Declara e inicializa la variable t en 2, termina cuando t sea mayor que i e incrementa la variable t de uno en uno
                                if(i%t==0){ // si el residuo de la división i/t es 0, haga lo siguiente:
                                    ban = 0; //Le asigna el numero 0 a la variable ban
                                    break;} //ROmpe el ciclo
                            }
                        }
                        else{ //Si la condición anterior no se cumplió, haga lo siguiente:
                            for(int t=2; t<i; t++){ //Declara e inicializa la variable t en 2, termina cuando t sea mayor que i e incrementa la variable t de uno en uno
                                if(i%t==0){ //Si el reiduo de la división i/t es 0, haga lo siguiente:
                                    ban = 0; //Le asigna el numero 0 a la variable ban
                                    break;} //Rompe el ciclo
                            }
                        }
                        if(ban==1){ //Si ban es igual a 1, haga lo siguiente
                            primo = i; // A la variable primo, asígnele el valor de la variable i
                        }
                        if(entero%primo==0){ // Si el residuo de la división entero/primo es igual a 0, haga lo siguiente
                            maximo = primo; //a la variable máximo asígnele el valor de la variable primo
                        }
                }
                cout << "El mayor factor primo de " << entero << " es " << maximo << endl; //Imprime el mayor factor primo
            }
            break;
        }
        case 13:{
            {
                int entero, ban, sumatoria = 0; //Declaración de variables
                cout << "Ingrese el numero entero: ";
                cin >> entero; //Asigna la captura a la variable entero
                for(int i=2;i < entero;i++){ //Declara e inicializa la variable i en 2, termina cuando i sea igual o mayor que entero e incrementa la variable i de uno en uno
                        ban = 1; // Se le asigna el numero uno a la variable ban
                        if(i<10){ //Si i es menor que diez, haga lo siguiente:
                            for(int t = 2;t < i; t++){ //Declara e inicializa la variable t en 2, termina cuando t sea igual o mayor que i e incrementa la variable t de uno en uno
                                if(i%t==0){ //Si el residuo de la división i/t es igual a 0, haga lo siguiente:
                                    ban = 0; //Se le asigna el numero cero a la variable ban
                                    break;} //Rompe el ciclo
                            }
                        }
                        else{
                            for(int t=2; t<i; t++){
                                if(i%t==0){ //Si el residuo de la división i/t es igual a 0, haga lo siguiente:
                                    ban = 0; //Se le asigna el numero cero a la variable ban
                                    break;} //Rompe el ciclo
                            }
                        }
                        if(ban==1){ //Si el valor de la variable ban es igual a 1, haga lo siguiente:
                            sumatoria += i; //En la variable sumatoria se le asigna el valor del resultado de la suma entre sumatoria e i
                        }
                }
                cout << "El resultado de la suma es: " << sumatoria << endl; //Imprime el valor de la sumatoria
                return 0;
                break;
            }
        }
        case 14:{

            {
                int Mpalindromo = 10000, operacion, residuo, sumatoria, unidades, ent1, ent2, ban; //Declaración de variables
                for(int i = 999;i > 100;i--){ //Declara e inicializa la variable i en 999, termina cuando i sea menor que 100 y decrementa la variable i de uno en uno
                        for(int t = 999;t*i > Mpalindromo;t--){ //Declara e inicializa la variable t en 999, termina cuando t*i sea menor que Mpalíndromo y decrementa la variable i de uno en uno
                            if(t < 100){ //Si t es menor que cero, haga lo siguiente
                                ban = 0; //Se le asigna el numero 0 a la variable ban
                                break; //ROmpe el ciclo
                            }
                            operacion = t*i; //A operación se le asigna el resultado de t*i
                            sumatoria = 0; //A sumatoria se le asigna el número 0
                            if(operacion > 99999){ //Si operacion es mayor que 99999, haga lo siguiente
                                unidades = 100000;} //A unidades se le asigna 100000
                            else{ //SI la condición anterior no se cumple, haga lo siguiente
                                unidades = 10000;} //A unidades se le asigna 10000
                            while(operacion > 1){ //Mientras operación sea mayor que 1
                                residuo = operacion%10; //EN residuo se guarda el residuo de la división operación/10
                                operacion = operacion/10; //En operación se guarda el resultado de la división operación/10
                                sumatoria += residuo*unidades; //En sumatoria se suma el valor del producto entre residuo y unidades
                                unidades /= 10; //En unidades se guarda el valor de unidades /10
                            }
                            if(sumatoria == (t*i)){ //SI sumatoria es igual al producto entre t*i
                                Mpalindromo = t*i; // A Mpalíndromo se le guarda el resultado del producto entre t*i
                                ent1 = i; //En ent1 se guarda el valor de i
                                ent2= t; // EN ent2 se guarda el valor de t
                                ban = 1; //A la variable ban se le asigna el numero 1
                                break; //Rompe el ciclo
                            }
                        }
                        if(ban==1){ //Si el valor de la variable ban es igual a 1
                            break; //Rompe el ciclo
                        }
                }
                cout << ent1 << "*" << ent2 << " = " << Mpalindromo << endl; //Imprime los dos números de 3 cifras que generan el mayor número palíndromo
                break;
            }

        }

        case 15:{
            int ingreso, fila, columna, topes= 3, c = 1, ban = 1, agregar = 1, ban2 = 1, aumentot = 4, sumatoria = 0, arriba, abajo = 0;
            cout << "Ingrese el tamaño (debe ser impar): ";
                    cin >> ingreso;
            while(ingreso%2 == 0){
                cout << "Ingrese el tamaño (DEBE SER IMPAR): ";
                        cin >> ingreso;
            }
            int mimatriz[ingreso][ingreso];
            fila = ingreso/2;
            columna = fila;
            for(int i = 1;columna < ingreso; i++){
                if(i==1){
                        mimatriz[fila][columna] = i;
                }
                else if(i==2){
                        columna += 1;
                        agregar += 1;
                        mimatriz[fila][columna] = agregar;
                        fila += 1;
                        agregar += 1;
                        mimatriz[fila][columna] = agregar;
                }
                else{
                        if(ban == 1){
                            for(int t=1; t <= c; t++){
                                if(agregar==topes){
                                    topes += aumentot;
                                    c += 1;
                                    aumentot += 2;
                                }
                                if(ban2==1){
                                    columna -= 1;
                                    if(t==c){
                                        ban2 = 0;
                                    }
                                }
                                else{
                                    columna += 1;
                                    if(columna == ingreso){
                                        break;
                                    }
                                    if(t==c){
                                        ban2 = 1;
                                    }
                                }
                                agregar += 1;
                                mimatriz[fila][columna] = agregar;
                            }
                            ban = 0;
                        }
                        else{
                            for(int t=1; t <= c; t++){
                                if(agregar==topes){
                                    topes += aumentot;
                                    c += 1;
                                    aumentot += 2;
                                }
                                if(ban2==0){
                                    fila -= 1;
                                }
                                else{
                                    fila += 1;
                                }
                                agregar += 1;
                                mimatriz[fila][columna] = agregar;
                            }
                            ban = 1;
                        }
                }
            }
            arriba = ingreso - 1;
            for(int i = 0; i < ingreso;i++){
                sumatoria += mimatriz[i][i];
                if(arriba != (ingreso/2) && abajo != (ingreso/2)){
                        sumatoria += mimatriz[arriba][abajo];
                }
                arriba--;
                abajo++;

            }
            cout << "En una espiral de " << ingreso << "x" << ingreso << ", la suma es " << sumatoria << endl << endl;
            cout << "Espiral: "<< endl;
            for(int i = 0; i < ingreso; i++){
                for(int t= 0; t < ingreso; t++){
                        if(mimatriz[t][i]/10 < 1){
                            cout << "   " << mimatriz[i][t] << " ";
                        }
                        else if(mimatriz[t][i]/100 < 1){
                            cout << "  " << mimatriz[i][t] << " ";
                        }
                        else if(mimatriz[t][i]/1000 < 1){
                            cout << " " << mimatriz[i][t] << " ";
                        }
                        else{
                            cout << mimatriz[i][t] << " ";
                        }
                }
                cout << endl;
            }
            return 0;
            break;
        }
        case 16:{
            int n=0,comparador=0,semilla=0,modulo=0;
            cout<<"Ingrese el numero: ";
            cin>>n;
            comparador=seriecollatz(n-1);// Se inicia en el menor al ingresado

            for (int i=(n-1);i>1;i--){
                if(seriecollatz(i)>=comparador){
                        // Cambia el valor del comparador
                        comparador=seriecollatz(i);
                        semilla=i;
                }
            }
            cout<<"La serie mas larga es con la semilla: "<<semilla<<" teniendo: "<<comparador<<" terminos."<<endl;
            while (semilla!=1){
                modulo = semilla%2;
                // Condiciones para que imprima la serie
                if (modulo == 0){

                        cout<<semilla<<endl;
                        semilla=semilla/2;
                }

                if (modulo!=0){
                        cout<<semilla<<endl;
                        semilla=(3*semilla)+1;
                }
            }
            cout<<semilla<<endl;
            return 0;
            break;
        }

        case 17: {
            int ingreso, triangular, arriba, contador, ban = 1; //Declaración de variables
            cout << "Ingrese el numero k: ";
            cin >> ingreso; // EN la variable ingreso guarda la captura
            for(int i = 1;;i++){ //Declara e inicializa la variable i en 1, no tiene condición de terminación e incrementa la variable i de uno en uno
                contador = 2; //A la variable contador le asigna 2
                triangular = (i*(i+1))/2; //A la variable triangular le asigna el resultado de la operación (i*(i+1))/2
                for(int t = 2;t <= triangular;t++){ //Declara e inicializa la variable t en 2, termina cuando t sea mayor que triangular e incrementa la variable t de uno en uno
                        if(triangular%t==0 && ban ==1){ //Si el residuo de la división triangular/t es igual a 0 y ban es igual a 1, haga lo siguiente:
                            arriba = triangular / t; //A la variable arriba se le asigna el resultado de la división triangular/t
                            contador += 1; // contador + 1
                            ban = 0; //A la variable ban se le asigna 0
                        }
                        else if(triangular%t==0){ //Si no se cumple la condición anterior y el residuo de la división triangular/t es igual a 0, haga lo siguiente:
                            contador += 1; //contador + 1
                        }
                        if(t > arriba){ //Si t es mayor que arriba, haga lo siguiente:
                            break; //Rompa el ciclo
                        }
                }
                ban = 1; // A la variable ban se le asigna 1
                if(contador > ingreso){//Si contador es mayor que ingreso, haga lo siguiente:
                        break; //Rompa el ciclo
                }
            }
            cout << "El numero es: " << triangular << " que tiene " << contador << " divisores."<< endl; //Imprime el resultado
            return 0;
            break;
        }






    }
    return 0;

}




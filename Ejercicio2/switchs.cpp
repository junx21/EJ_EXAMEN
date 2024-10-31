#include "switchs.h"
#include <iostream>

using namespace std;

int b;

void dia() {

    cout<<"Ingrese un numero entre 1 al 7 para ver el dia de la semana: ";

    cin>>b;

    switch(b) {

        case 1:

            cout <<"Lunes";

        break;

        case 2:

            cout <<"Martes";

        break;

        case 3:

            cout <<"Miercoles";

        break;

        case 4:

            cout <<"Jueves";

        break;

        case 5:

            cout <<"Viernes";

        break;

        case 6:

            cout <<"Sabado";

        break;

        case 7:

            cout <<"Domingo";

        break;

        default: cout<<"Ingrese un numero valido";

    }





}
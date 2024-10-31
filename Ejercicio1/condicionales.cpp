//
// Created by danie on 31/10/2024.
//

#include "condicionales.h"
#include <iostream>

/*  Escribe un programa que solicite al usuario ingresar un número entero y verifique si es positivo, negativo o cero. Usa una estructura if..else para realizar la verificación e imprime el resultado. */


using namespace std;

int a;

void verification() {
     cout <<"Ingresa un numero entero: ";
     cin >> a;
     if (a >=0) {
         cout << "El numero es positivo" << endl;
     } else if (a < 0) {
         cout << "El numero es negativo" << endl;
     } else {
         cout << "El numero es cero" << endl;
     }
}

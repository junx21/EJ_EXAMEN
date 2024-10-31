//
// Created by danie on 31/10/2024.
//

#include "bucles.h"
#include <iostream>

using namespace std;

void suma() {
    int c=0,i=0,d=0,e=0;
    for (i = 1; i <= 50; i++) {
        c=c+i;
    }

    while (d<=50) {
        e=e+d;
        d++;
    }
    cout << "La suma entre los numeros del 1 al 50 es: " << c << endl;
    cout << "La suma entre los numeros pares del 1 al 50 es: " << d;
}
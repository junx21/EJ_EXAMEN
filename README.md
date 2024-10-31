# Link Repositorio 

https://github.com/junx21/EJ_EXAMEN


# Enunciados 
## Examen de Programación - Tema 2


Parte 1: Teoría Breve



1. Pregunta 1: Explica brevemente en qué se diferencia una estructura if..else de una estructura switch. ¿Cuándo es preferible usar switch?

La estructura if...else evalúa condiciones complejas o múltiples expresiones, usándose cuando las condiciones varían o son complejas. Switch evalúa una única expresión y la compara con valores específicos, siendo ideal para casos discretos y constantes.

Se prefiere switch cuando una variable puede tomar valores específicos, mejorando la legibilidad y, en algunos casos, el rendimiento frente a múltiples if...else if

## Ejemplo 1
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string dia = "martes";

    if (dia == "lunes") {
        cout << "Hoy es lunes, inicio de la semana." << endl;
    } else if (dia == "martes") {
        cout << "Hoy es martes, seguimos con la semana." << endl;
    } else if (dia == "miércoles") {
        cout << "Hoy es miércoles, mitad de la semana." << endl;
    } else if (dia == "jueves") {
        cout << "Hoy es jueves, casi al final de la semana." << endl;
    } else if (dia == "viernes") {
        cout << "Hoy es viernes, fin de semana." << endl;
    } else {
        cout << "Es fin de semana." << endl;
    }

    return 0;
}

```
## Fuente CHATGPT


## Ejemplo 2
```cpp
#include <iostream>
using namespace std;

int main() {
    int dia = 2;  // Supongamos que 1 = lunes, 2 = martes, ..., 5 = viernes

    switch (dia) {
        case 1:
            cout << "Hoy es lunes, inicio de la semana." << endl;
            break;
        case 2:
            cout << "Hoy es martes, seguimos con la semana." << endl;
            break;
        case 3:
            cout << "Hoy es miércoles, mitad de la semana." << endl;
            break;
        case 4:
            cout << "Hoy es jueves, casi al final de la semana." << endl;
            break;
        case 5:
            cout << "Hoy es viernes, fin de semana." << endl;
            break;
        default:
            cout << "Es fin de semana." << endl;
    }

    return 0;
}

```
## Fuente CHATGPT

2. Pregunta 2: Describe la estructura básica de un bucle for y de un bucle while. ¿En qué caso usarías uno en lugar del otro?


La estructura básica de un bucle for incluye tres partes: inicialización, condición y actualización. Se escribe así:
```cpp
for (inicialización; condición; actualización) {
    // Código a ejecutar en cada iteración
}
```

El bucle while, por su parte, evalúa una condición al inicio y solo ejecuta el código mientras esa condición sea verdadera. Su estructura es:

```cpp
while (condición) {
    // Código a ejecutar mientras la condición sea verdadera
}

```
¿Cuándo usar cada uno? Usa for cuando se conoce de antemano cuántas veces debe repetirse el ciclo, como al recorrer un arreglo de tamaño fijo. Usa while cuando el número de iteraciones depende de una condición variable y no se conoce de antemano, como al esperar una entrada del usuario o un cambio en una variable.

##Fuente CHATGPT


Parte 2: Ejercicios Prácticos de Código



1. Ejercicio de Condicionales:

• Escribe un programa que solicite al usuario ingresar un número entero y verifique si es positivo, negativo o cero. Usa una estructura if..else para realizar la verificación e imprime el resultado.

• Bonus (opcional): Mejora el programa anterior para que, si el número es positivo, también verifique si es par o impar.

2. Ejercicio de Selección con switch:

• Crea un programa que solicite al usuario ingresar un número del 1 al 7 y que imprima el nombre del día de la semana correspondiente (1 para lunes, 2 para martes, etc.). Usa una estructura switch para resolverlo.

3. Ejercicio de Bucles:

• Escribe un programa que calcule la suma de los números pares entre 1 y 50 usando un bucle for.

• Bonus (opcional): Modifica el programa para que sume los números impares entre 1 y 50 utilizando un bucle while.

4. Ejercicio Básico de Arrays (Opcional):

• Declara un array de 5 números enteros e inicialízalo con los valores: 2, 4, 6, 8, 10.

• Usa un bucle for para recorrer el array e imprimir cada valor multiplicado por 3.

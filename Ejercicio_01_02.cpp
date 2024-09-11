/*Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos
Fecha creación: 15/08/2024
Número de ejercicio: 2
Problema planteado: Volumen de una esfera.*/

#include <iostream>
#include <math.h>
using namespace std;


int main() {
    int Radio;
    cout<<("Ingrese el radio de su esfera \n");
    cin>>Radio;
    int r3= pow(Radio,3);
    double Volumen=(4*r3*3.14159265)/3;
    cout<<("El Volumen de su espera es = ")<<Volumen<<(" u^3");
    return 0;
}

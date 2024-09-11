/*Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos
Fecha creación: 15/08/2024
Número de ejercicio: 3
Problema planteado: De Grados Centigrados a Kelvins*/

#include <iostream>
#include <math.h>
using namespace std;


int main() {
    int opcion;
    double Grado;
    double G_total;
    cout<<("Quiere cambiar de Kelvin a Grados Centigrados\n");
    cout<<("O de grados centigrados a Kelvin\n");
    cout<<("C a K = 1\n");
    cout<<("K a C = 2\n");
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        cout<<("Ingrese los la cantidad de grados que quiere ingresar ");
        cin>>Grado;
        G_total=Grado+273;
        cout<<("Grados Celsius ")<<Grado<<(" = ")<<G_total<<(" Kelvin");
        break;
    case 2:
        cout<<("Ingrese los la cantidad de grados que quiere ingresar ");
        cin>>Grado;
        G_total=Grado-273;
        cout<<("Kelvin ")<<Grado<<(" = ")<<G_total<<(" Grados Celsius");
        break;
    default:
       
        break;
    }
    return 0;
}
/* Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos
Fecha creación: 3/09/2024
Número de ejercicio: 3
Problema planteado: Distancia entre 2 puntos*/
#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b, c, d;
    cout<<("Ingrese la primera cordenada 'x' y 'y'")<<endl;
    cin>>a>>b;
    cout<<("Ingrese la segunda cordenada 'x' y 'y'")<<endl;
    cin>>c>>d;
    int distancia=pow((pow((a-c),2)+pow(b-d,2)),0.5);
    cout<<("la distancia entre puntos es igual a = ")<<distancia;
    return 0;
}
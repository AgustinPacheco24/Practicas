/*Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos
Fecha creación: 15/08/2024
Número de ejercicio: 3
Problema planteado: Promedio de notas.*/

#include <iostream>
#include <math.h>
using namespace std;


int main() {
    int N_notas;
    int i=1;
    float Nota;
    int sum=0;
    int n;
    cout<< ("Ingrese la cantidad de notas que quiere promedear ");
    cin>> N_notas;
    N_notas==n;
    do{
        cout<<("Ingrese la nota ")<<i<<endl;
        cin>>Nota;
        sum+=Nota;
        i++;
        n-=1;

    } while(n>0);
    float Promedio=sum/N_notas;
    cout<< ("El Promedio de tus notas es = ")<<Promedio;
    return 0;
} 
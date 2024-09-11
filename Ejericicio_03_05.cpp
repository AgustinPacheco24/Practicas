/*Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos.
Fecha creación: 10/09/2024
Número de ejercicio: 5
Problema planteado: Lanzar una moneda*/

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int Porcentajes(int n, int C){
    int Porcentaje = (C/n)*100;
    return Porcentaje;
}

int main(){
    int n, cara=0, cruz=0;
    srand(time(NULL));
   cout<<("Ingrese la cantidad de veces que quiere tirar la moneda")<<endl; 
   cin>>n;
   for (int i = 1; i <= n; i++){
    int moneda=1+rand()%2;
    if (moneda=1){
        cara++;
    }
    else{
        cruz++;
    }
   }
   int P_Cara=Porcentajes(n,cara);
   int P_Cruz=Porcentajes(n,cruz);
   cout<<("Cara = ")<<cara<<("    Cruz = ")<<cruz<<endl;
   cout<<("Porcentaje de Cara = ")<<P_Cara<<endl;
   cout<<("Porcentaje de Cruz = ")<<P_Cruz<<endl;
}
/*Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos.
Fecha creación: 10/09/2024
Número de ejercicio: 4
Problema planteado: Sumatoria de cuadrados*/

#include <iostream>
#include <math.h>
using namespace std;

int Sumatoria(int n){
    int sum=0;
    for (int i = 1; i <= n; i++){
        if (i%2==1){
        sum+=pow(i,2);
        }
        else{
        sum-=pow(i,2);
        }
    }
    return sum;
}


int main(){
    int n;
    cout<<("Ingrese de cuantos terminos quiere que sea la sumatoria\n");
    cin>>n;
    int Sum=Sumatoria(n);
    cout<<("sumatoria es = ")<<Sum;
    return 0;
}
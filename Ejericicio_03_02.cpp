/*Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos.
Fecha creación: 10/09/2024
Número de ejercicio: 2
Problema planteado: tirar un dado n veces*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

void lanzamientos_del_dado(int n){
    int X=0;
    float Frecuencia=0;
    for (int i = 1; i <=n; i++){
       int n_dado=1+rand()%((6+1)-1);
       if (n_dado%2==0){
        X++;
       } 
    }
    int X_n=n-X;
    int Factorial_n=1, Factorial_X=1,Factorial_n_X=1;
    for (int i = 1; i <=n; i++)
    {
        Factorial_n*=i;
    }
    for (int i = 1; i <=X; i++)
    {
        Factorial_X*=i;
    }
    for (int i = 1; i <=X_n; i++)
    {
        Factorial_n_X*=i;
    }
    Frecuencia=(Factorial_n/(Factorial_X*Factorial_n_X))*(pow(0.5,n));
    cout<<("Cantidad de veces que fue lanzado el dado = ")<<n<<endl;
    cout<<("Cantidad de veces que salio un numero par = ")<<X<<endl;
    cout<<("La frecuencia de repetición de las caras pares = ")<<Frecuencia<<endl;
}


int main(){
    int n;
    srand(time(NULL));
    cout<<("Ingrese la cantidad de veces que quiere tirar el dado")<<endl;
    cin>>n;
    lanzamientos_del_dado(n);
    return 0;
}
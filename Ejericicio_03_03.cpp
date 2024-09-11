/*Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos.
Fecha creación: 10/09/2024
Número de ejercicio: 3
Problema planteado: cualquier base a decimales*/

#include <iostream>
#include <math.h>
using namespace std;

void base_a_decimales(int numero,int base){
    int Num_decimal=0,j=0;
    int num=numero;
    while (num>=1){
        num/=10;
        j++;
    }
    int long num2=numero;
    for (int i = 0; i <= j; i++)
    {
        Num_decimal+=(num2%10)*pow(base,i);
        num2/=10;
    }
    cout<<numero<<(" en decimales es = ")<<Num_decimal;
}

int main(){
    int base, numero;
    cout<<("Ingrese un numero ");
    cin>>numero;
    cout<<("Ingrese que base es ");
    cin>>base;
    base_a_decimales(numero, base);
    return 0;
}
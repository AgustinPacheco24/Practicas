/*Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos
Fecha creación: 21/08/2024
Número de ejercicio: 5
Problema planteado: Numero Primo*/

#include <iostream>
using namespace std;


int main() {
    int Numero;
    int Primo=2;
    int i=1;

    cout<<("Ingrese un numero\n");
    cin>>Numero;

    while (Numero>Primo && i!=2)
    {
        if (Numero%Primo==0 && Numero!=Primo)
        {
            cout<<Numero<<(" no es primo");
            i++;
        }
        else{
            Primo++;
        }
        
    }
    if (Numero==Primo){
        cout<<Numero<<(" es primo");
    }
    return 0;
}
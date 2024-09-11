/*Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos
Fecha creación: 21/08/2024
Número de ejercicio: 7
Problema planteado: Si es vocal o no*/

#include <iostream>
using namespace std;


int main() {
    char letra;
    cout<<("Ingrese una letra\n");
    cin>>letra;
    if (letra=='a'|| letra=='e' || letra=='i' || letra=='o' || letra=='u'){
        cout<<letra<<(" es una vocal");
    }
    else{
       cout<<letra<<(" no es una vocal"); 
    }
    
    return 0;
}
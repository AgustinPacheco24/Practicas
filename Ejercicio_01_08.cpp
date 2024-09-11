/*Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos
Fecha creación: 21/08/2024
Número de ejercicio: 8
Problema planteado: 100 primero numeros primos*/

#include <iostream>
using namespace std;



int main() {
    int Numero=2;
    
    for (int i = 1; i <= 100;){
        int Primo=2;
        int break_=1;
        while (break_!=2)
        {
            if (Numero%Primo==0 && Numero==Primo)
            {
               cout<<Numero<<(" ");
               break_++;
               i++;
            }
            else if (Numero%Primo==0 && Numero!=Primo)
            {
                break_++;
            }
            
            else{
                Primo++;
            }
        }
        Numero++;
        
    }
    

}
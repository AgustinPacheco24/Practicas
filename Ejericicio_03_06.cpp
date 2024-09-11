/*Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos.
Fecha creación: 10/09/2024
Número de ejercicio: 6
Problema planteado: Lanzar una moneda*/

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void Intentos_para_adivinar(int N){
    int intento=0,Intentos=1;
    int extr1=0,extr2=50;
    do
    {
        cout<<("Estoy pensando un número entre ")<<extr1<<(" y ")<<extr2<<endl;
        cin>>intento;
        if(intento<N && N<extr2){
            extr1=intento;
        }
        else{
            extr2=intento;
        }
        Intentos++;
    } while (intento!=N && Intentos<=5);
    if (intento==N){
        cout<<("Felicitaciones… Adivinaste el número");
    }
    else{
        cout<<("Perdiste, Lo siento. La respueta era ")<<N;
    }
}

int main(){
    srand(time(NULL));
    int N_Adivina=rand()%(50+1);
    Intentos_para_adivinar(N_Adivina);
    return 0;
}
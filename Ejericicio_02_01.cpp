/* Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos
Fecha creación: 3/09/2024
Número de ejercicio: 1
Problema planteado: Leer una cantidad de segundos y realizar una función para
convertirla a horas, minutos y segundos.*/
#include <iostream>
using namespace std;

void horas_y_minutos_a_segundos(int x){
    int horas,minutos;
    horas=0;
    minutos=0;
    while (x>=3600){
        x-=3600;
        horas++;
    }
    while (x>=60){
        x-=60;
        minutos++;
    }
    cout<<horas<<(" horas, ")<<minutos<<(" minutos y ")<<x<<(" segundos");
}

int main(){
    int segundos=20754873;
    cout<<("De ")<<segundos<<(" hay ");
    horas_y_minutos_a_segundos(segundos);
    return 0;
}
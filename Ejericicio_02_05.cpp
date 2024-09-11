/* Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos
Fecha creación: 3/09/2024
Número de ejercicio: 5
Problema planteado: Hallar si es triangulo rectangulo*/
#include <iostream>
#include<math.h>
using namespace std;

void dias_de_cada_año(int año, int mes){
    if (año%4==0){
        cout<<("Es año bisiesto\n");
    }else{
        cout<<("Es año bisiesto\n");
    }

    if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
        cout<<("El mes tiene 31 dias\n");
    }
    else if (mes==2){
        if (año%4==0){
        cout<<("El mes tiene 29 dias\n");

    }else{
        cout<<("El mes tiene 28 dias\n");
    }
    }
    else if (mes==4 || mes==6 || mes==9 || mes==11){
        cout<<("El mes tiene 30 dias\n");
    }  
}

int main(){
    cout<<("Los dias de cada mes de este año\n");
    dias_de_cada_año(2024,9);
    return 0;
}
    
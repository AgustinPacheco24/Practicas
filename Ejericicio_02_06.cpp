/* Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos
Fecha creación: 3/09/2024
Número de ejercicio: 6
Problema planteado: Periodo del dia*/
#include <iostream>
#include<math.h>
using namespace std;
void periodo_del_dia(int hora){
    hora<=24;
    if(hora>=0 && hora<6){
     cout<<("Es de madrugada");
    }
    else if (hora>=6 && hora<12){
     cout<<("Es de mañana");
    }  
    else if (hora>=12 && hora<21){
     cout<<("Es de tarde");
    }
    else if (hora>=21 && hora<24){
     cout<<("Es de noche");
    }
}
main(){
    int x=6;
    cout<<("Son las ")<<x<<(":00")<<endl;
    periodo_del_dia(x);
    return 0;
}
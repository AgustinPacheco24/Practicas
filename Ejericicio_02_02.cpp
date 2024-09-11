/* Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos
Fecha creación: 3/09/2024
Número de ejercicio: 2
Problema planteado: Hallar la hipotenusa por pitagoras*/
#include <iostream>
#include<math.h>
using namespace std;

int main(){
    float CA;
    float CO;
    cout<<("Ingrese el cateto adiasente de su triangulo")<<endl;
    cin>>CA;
    cout<<("Ahora el cateto opuesto")<<endl;
    cin>>CO;
    float Hipotenusa=pow((pow(CA,2)+pow(CO,2)),0.5);
    cout<<("La hipotenusa es = ")<<Hipotenusa;
    return 0;
}

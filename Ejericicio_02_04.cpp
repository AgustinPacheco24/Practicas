/* Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos
Fecha creación: 3/09/2024
Número de ejercicio: 4
Problema planteado: Hallar si es triangulo rectangulo*/
#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int CA,CO,Hipotenusa;
    cout<<("Ingrese el cateto adiasente de su triangulo")<<endl;
    cin>>CA;
    cout<<("Ahora el cateto opuesto")<<endl;
    cin>>CO;
    cout<<("Ahora la hipotenusa")<<endl;
    cin>>Hipotenusa;
    if(pow(Hipotenusa,2)==pow(CA,2)+pow(CO,2)){
        cout<<("Tus medidas forman un triangulo rectangulo");
    }
    else{
        cout<<("Tus no medidas forman un triangulo rectangulo");
    }
    return 0;
}
/*Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos
Fecha creación: 15/08/2024
Número de ejercicio: 1
Problema planteado: Área de un triángulo.*/

#include <iostream>
using namespace std;

int main() {
    int altura;
    int base;
    cout << ("Hallar el Area de un triagulo recto\n");
    cout << ("Ingrese la altura ")<<endl;
    cin >> altura;
    cout << ("Ingrese la base ")<<endl;
    cin >> base;
    int Area = (base*altura)/2;
    cout << ("El area de tu triangulo es = ")<< Area << ("u^2");
    return 0;
}
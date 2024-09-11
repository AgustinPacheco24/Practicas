/*Materia: Programación I, Paralelo 1
Autor: Agustin Pacheco Collazos.
Fecha creación: 09/09/2024
Número de ejercicio: 1
Problema planteado: Suma de una serie*/
#include <iostream>
using namespace std;


void serie_de_numeros(int n){
    int a=4,b=6,sum1=0,j=1;
    int serie=0;
    if (n>=2){
        sum1=a+b;
    }
    else{
        sum1=a;
    }
    for ( int i = 3; i <= n; i++){
        serie=a+b-j;
        if (i%2==1){
            a=serie;
            sum1=sum1+a;
        }
        else{
            b=serie;
            sum1=sum1+b;
        }
        
        j++; 
    }
    cout<<("la sumatoria es igual = ")<<sum1<<endl;  
}
int main(){
    int n=0;
    system ("cls");
    cout<<("ingrese la cantidad de numero para la sumatoria = ");
    cin>>n;
    serie_de_numeros(n);
    return 0;

}
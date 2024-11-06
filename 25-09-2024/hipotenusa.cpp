#include <iostream>
using namespace std;

int main (){

double catetoAdjacente;
double catetoOposto;

// Solicitar o comprimento do cateto adjacente
    cout << "Comprimento do cateto adjacente: ";
    cin >> catetoAdjacente;

    // Solicitar o comprimento do cateto oposto
    cout << "Comprimento do cateto oposto: ";
    cin >> catetoOposto;

    // Calcular o quadrado da hipotenusa
    double quadradoHipotenusa = (catetoAdjacente * catetoAdjacente) + (catetoOposto * catetoOposto);

    cout << "Quadrado da hipotenusa do triângulo retângulo: " << quadradoHipotenusa << endl;

    return 0;
}



#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Medidas da esfera
    double raioExterno = 10.0; // em centímetros
    double raioFuro = 2.0; // em centímetros

    // Cálculo do volume da esfera externa
    double volumeExterno = (4.0 / 3.0) * M_PI * pow(raioExterno, 3);
    // Cálculo do volume do furo
    double volumeFuro = (4.0 / 3.0) * M_PI * pow(raioFuro, 3);

    // Volume total da esfera com o furo
    double volumeTotal = volumeExterno - volumeFuro;

    // Saída do volume com duas casas decimais
    std::cout << "O volume da esfera com furo é: " << std::fixed << std::setprecision(2) << volumeTotal << " cm³" << std::endl;

    return 0;
}

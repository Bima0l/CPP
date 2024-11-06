#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Medidas do cilindro
    double raioBase = 7.0; // em metros
    double altura = 12.0; // em metros

    // Cálculo da área da superfície do cilindro
    double areaSuperficie = 2 * M_PI * raioBase * (raioBase + altura);

    // Saída da área da superfície com duas casas decimais
    std::cout << "A área da superfície do cilindro é: " << std::fixed << std::setprecision(2) << areaSuperficie << " m²" << std::endl;

    return 0;
}

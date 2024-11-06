#include <iostream>
#include <iomanip>

int main() {
    // Medidas do paralelepípedo
    double comprimento = 4.0; // em metros
    double largura = 3.0; // em metros
    double altura = 5.0; // em metros

    // Cálculo do volume do paralelepípedo
    double volume = comprimento * largura * altura;

    // Saída do volume com duas casas decimais
    std::cout << "O volume do paralelepípedo é: " << std::fixed << std::setprecision(2) << volume << " m³" << std::endl;

    return 0;
}

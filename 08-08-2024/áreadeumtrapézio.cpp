#include <iostream>
#include <iomanip>

int main() {
    // Medidas do trapézio
    double baseMaior = 6.0; // em metros
    double baseMenor = 4.0; // em metros
    double altura = 9.0; // em metros

    // Cálculo da área do trapézio
    double area = ((baseMaior + baseMenor) * altura) / 2;

    // Saída da área com duas casas decimais
    std::cout << "A área do trapézio é: " << std::fixed << std::setprecision(2) << area << " m²" << std::endl;

    return 0;
}

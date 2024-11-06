#include <iostream>
#include <iomanip>

int main() {
    // Medidas do triângulo
    double base = 5.0; // em metros
    double altura = 800.0 / 100.0; // convertendo centímetros para metros

    // Cálculo da área do triângulo
    double area = (base * altura) / 2;

    // Saída da área com duas casas decimais
    std::cout << "A área do triângulo é: " << std::fixed << std::setprecision(2) << area << " m²" << std::endl;

    return 0;
}

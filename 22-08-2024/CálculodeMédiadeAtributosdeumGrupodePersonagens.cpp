#include <iostream>

int main() {
    const int NUM_PERSONAGENS = 5;
    int forcaTotal = 0, destrezaTotal = 0, inteligenciaTotal = 0;

    for (int i = 0; i < NUM_PERSONAGENS; ++i) {
        int forca, destreza, inteligencia;
        std::cout << "Coloque os atributos dos nossos cinco personagens: " << (i + 1) << ":\n";
        std::cout << "Forca: ";
        std::cin >> forca;
        std::cout << "Destreza: ";
        std::cin >> destreza;
        std::cout << "Inteligencia: ";
        std::cin >> inteligencia;

        forcaTotal += forca;
        destrezaTotal += destreza;
        inteligenciaTotal += inteligencia;
    }

    std::cout << "Media de Forca: " << static_cast<double>(forcaTotal) / NUM_PERSONAGENS << std::endl;
    std::cout << "Media de Destreza: " << static_cast<double>(destrezaTotal) / NUM_PERSONAGENS << std::endl;
    std::cout << "Media de Inteligencia: " << static_cast<double>(inteligenciaTotal) / NUM_PERSONAGENS << std::endl;

    return 0;
}

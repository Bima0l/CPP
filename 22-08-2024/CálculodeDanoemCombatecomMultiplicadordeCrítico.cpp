#include <iostream>
#include <iomanip>

int main() {
    int ataques;
    std::cout << "Quantos ataques foram realizados? ";
    std::cin >> ataques;

    double danoTotal = 0.0;

    for (int i = 0; i < ataques; ++i) {
        double danoBase, multiplicadorCritico;

        std::cout << "Dano base do ataque " << (i + 1) << ": ";
        std::cin >> danoBase;

        do {
            std::cout << "Multiplicador de critico do ataque " << (i + 1) << " (0.0 a 2.0): ";
            std::cin >> multiplicadorCritico;
        } while (multiplicadorCritico < 0.0 || multiplicadorCritico > 2.0);

        danoTotal += danoBase * multiplicadorCritico;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Dano total causado: " << danoTotal << std::endl;

    return 0;
}

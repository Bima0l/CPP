#include <iostream>

int main() {
    const int PONTOS_INICIAIS = 100;
    int forca = 0, destreza = 0, inteligencia = 0;
    int pontosRestantes = PONTOS_INICIAIS;

    std::cout << "Voce tem " << PONTOS_INICIAIS << " pontos para distribuir entre Forca, Destreza e Inteligencia.\n";

    while (pontosRestantes > 0) {
        std::cout << "Pontos restantes: " << pontosRestantes << std::endl;
        int pontos;
        std::cout << "Quantos pontos voce quer adicionar a Forca? ";
        std::cin >> pontos;

        if (pontos > pontosRestantes) {
            std::cout << "Voce nao pode adicionar mais pontos do que os disponiveis. Tente novamente.\n";
            continue;
        }

        forca += pontos;
        pontosRestantes -= pontos;

        std::cout << "Pontos restantes: " << pontosRestantes << std::endl;
        std::cout << "Quantos pontos voce quer adicionar a Destreza? ";
        std::cin >> pontos;

        if (pontos > pontosRestantes) {
            std::cout << "Voce nao pode adicionar mais pontos do que os disponiveis. Tente novamente.\n";
            continue;
        }

        destreza += pontos;
        pontosRestantes -= pontos;

        std::cout << "Pontos restantes: " << pontosRestantes << std::endl;
        std::cout << "Quantos pontos voce quer adicionar a Inteligencia? ";
        std::cin >> pontos;

        if (pontos > pontosRestantes) {
            std::cout << "Voce nao pode adicionar mais pontos do que os disponiveis. Tente novamente.\n";
            continue;
        }

        inteligencia += pontos;
        pontosRestantes -= pontos;
    }

    std::cout << "Distribuicao final de pontos:\n";
    std::cout << "Forca: " << forca << std::endl;
    std::cout << "Destreza: " << destreza << std::endl;
    std::cout << "Inteligencia: " << inteligencia << std::endl;

    return 0;
}

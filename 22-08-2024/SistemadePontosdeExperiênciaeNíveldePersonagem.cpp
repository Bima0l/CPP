#include <iostream>


int main() {
    int missao;
    int totalExperiencia = 0;
    
    std::cout << "Quantidade de missoes realizadas? ";
    std::cin >> missao;

    for (int i = 0; i < missao; ++i) {
        int experiencia;
        std::cout << "Insira a quantidade de pontos de experiência ganhos na missao (até 1000 pontos)" << (i + 1) << ":";
        std::cin >> experiencia;
        totalExperiencia += experiencia;

        int nivel = totalExperiencia / 1000;
        int experienciaParaProximoNivel = 1000 - (totalExperiencia % 1000);

        std::cout << "Nivel atual: " << nivel << std::endl;
        std::cout << "Experiencia restante para o proximo nivel: " << experienciaParaProximoNivel << std::endl;
    }

    return 0;
}
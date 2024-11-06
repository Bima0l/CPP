#include <iostream>
#include <cstdlib>  //função rand()
#include <ctime>    //função time()

int main() {
    int forca, destreza, sorte;
    
    std::cout << "Para ver se voce pode realmente ir para a mega batalha dos nossos melhores cavalheiros!\n";
    std::cout << "Insira o valor de Força:";
    std::cin >> forca;
    std::cout << "Insira o valor de Destreza: ";
    std::cin >> destreza;
    std::cout << "Insira o valor de Sorte: ";
    std::cin >> sorte;

    
    std::srand(static_cast<unsigned int>(std::time(0)));
    int numeroAleatorio = std::rand() % 101;  

    std::cout << "Número aleatório gerado: " << numeroAleatorio << std::endl;

    if ((forca + destreza > 50) && (sorte > numeroAleatorio)) {
        std::cout << "Missão bem-sucedida!" << std::endl;
    } else {
        std::cout << "Missão fracassada!" << std::endl;
    }

    return 0;
}

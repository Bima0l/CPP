#include <iostream>
#include <string>

using namespace std;

int main() {

    string nomeDinossauro;
    double tamanhoFemur;

    cout << "Entre com o nome do dinossauro: ";
    cin >> nomeDinossauro;

    cout << "Digite o tamanho do femur em cm: ";
    cin >> tamanhoFemur;

    tamanhoFemur = tamanhoFemur / 100.0;  // Conversão de cm para metros

    // A variável é double e não int
    double altura = tamanhoFemur * 10;

    cout << "A altura aproximada do dinossauro " << nomeDinossauro << " e: " << altura << " metros" << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {

    string nome, intensidade;
    int idade;
    float percentual, frequencia;

    cout << "Digite o nome da pessoa: ";
    cin >> nome;

    cout << "Digite a idade da pessoa: ";
    cin >> idade;

    cout << "Digite a intensidade do treino (Leve, Moderado, Intenso): ";
    cin >> intensidade;

    if (intensidade == "Leve") {
        percentual = 0.50; // Corrigido para 50%
    } else if (intensidade == "Moderado") {
        percentual = 0.70; // Corrigido para 70%
    } else if (intensidade == "Intenso") {
        percentual = 0.85; // Corrigido para 85%
    } else {
        cout << "Intensidade inválida!" << endl;
        return 0;
    }

    frequencia = (220 - idade) * percentual;

    cout << "A frequência cardíaca ideal para " << nome << " é " << frequencia << " bpm." << endl;

    return 0;
}

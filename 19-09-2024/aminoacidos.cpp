#include <iostream> // Inclui a biblioteca padrão de entrada e saída
#include <string>   // Inclui a biblioteca para manipulação de strings
#include <map>     // Inclui a biblioteca para usar mapas (dicionários)

using namespace std; // Usar o namespace padrão para evitar escrever std:: toda hora

int main() {
    // Declara uma string para armazenar a sequência de aminoácidos
    string sequencia;

    // Solicita ao usuário que insira a sequência de aminoácidos
    cout << "Digite a sequencia de aminoacidos: (Letras MAIUSCULAS) ";
    cin >> sequencia; // Lê a sequência digitada pelo usuário

    // Cria um mapa para armazenar a contagem de cada aminoácido
    map<char, int> contagem;

    // Inicializa os aminoácidos (A, C, G, T) com contagem 0
    contagem['A'] = 0;
    contagem['C'] = 0;
    contagem['G'] = 0;
    contagem['T'] = 0;

    // Percorre cada caractere da sequência
    for (char aminoacido : sequencia) {
        // Verifica se o aminoácido é um dos esperados
        if (contagem.find(aminoacido) != contagem.end()) {
            // Incrementa a contagem do aminoácido
            contagem[aminoacido]++;
        }
    }

    // Exibe a contagem de cada aminoácido
    cout << "Saida esperada:" << endl;
    cout << "A: " << contagem['A'] << endl; // Mostra a contagem de A
    cout << "C: " << contagem['C'] << endl; // Mostra a contagem de C
    cout << "G: " << contagem['G'] << endl; // Mostra a contagem de G
    cout << "T: " << contagem['T'] << endl; // Mostra a contagem de T

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

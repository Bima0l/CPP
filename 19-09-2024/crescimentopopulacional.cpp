#include <iostream> // Inclui a biblioteca padrao de entrada e saida

using namespace std; // Usar o namespace padrao para evitar escrever std:: toda hora

int main() {
    // Declaracao das variaveis
    int individuos_iniciais; // Numero inicial de individuos
    double taxa_crescimento;  // Taxa de crescimento em porcentagem
    int geracoes;             // Numero de geracoes para simulacao

    // Solicita ao usuario o numero inicial de individuos
    cout << "Digite o numero inicial de individuos: ";
    cin >> individuos_iniciais; // Le o valor digitado

    // Solicita ao usuario a taxa de crescimento
    cout << "Digite a taxa de crescimento (em porcentagem): ";
    cin >> taxa_crescimento; // Le a taxa de crescimento

    // Solicita ao usuario o numero de geracoes
    cout << "Digite o numero de geracoes: ";
    cin >> geracoes; // Le o numero de geracoes

    // Converte a taxa de crescimento de porcentagem para decimal
    double taxa_decimal = taxa_crescimento / 100;

    // Inicializa a variavel para armazenar a populacao atual
    double populacao_atual = individuos_iniciais;

    // Loop para calcular o crescimento populacional em cada geracao
    for (int i = 1; i <= geracoes; i++) {
        // Calcula a nova populacao para a geracao atual
        populacao_atual *= (1 + taxa_decimal); // Aplica a taxa de crescimento

        // Exibe a populacao apos a geracao atual
        cout << "Populacao apos " << i << " geracao(s): " << populacao_atual << endl;
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}

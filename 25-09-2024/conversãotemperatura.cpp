#include <iostream>
using namespace std;

int main() {
    double temperatura; // Altere para double para suportar valores decimais
    char unidadeMedida;

    cout << "Qual temperatura desejada? ";
    cin >> temperatura;

    cout << "Digite a unidade de medida (C para Celsius, F para Fahrenheit): ";
    cin >> unidadeMedida; // Corrigido para capturar a entrada

    // Verifica a unidade de medida e realiza a conversão
    if (unidadeMedida == 'C' || unidadeMedida == 'c') {
        // Converte Celsius para Fahrenheit
        double fahrenheit = (temperatura * 9.0 / 5.0) + 32;
        cout << "Temperatura em Fahrenheit: " << fahrenheit << " F" << endl;
    } else if (unidadeMedida == 'F' || unidadeMedida == 'f') {
        // Converte Fahrenheit para Celsius
        double celsius = (temperatura - 32) * 5.0 / 9.0;
        cout << "Temperatura em Celsius: " << celsius << " C" << endl;
    } else {
        cout << "Unidade inválida! Use 'C' ou 'F'." << endl; // Corrigido a mensagem
    }

    return 0;
}


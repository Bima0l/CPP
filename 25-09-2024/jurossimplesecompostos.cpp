#include <iostream>
#include <iomanip> //definir a precisão decimal
#include <cmath> // Incluído para a função pow1000
using namespace std;

// Função para calcular montante com juros simples
double calcularJurosSimples(double capital, double taxa, int anos) {
    return capital + (capital * taxa / 100 * anos); // Montante = Capital + Juros
}

// Função para calcular montante com juros compostos
double calcularJurosCompostos(double capital, double taxa, int anos) {
    return capital * pow(1 + taxa / 100, anos); // Montante = Capital * (1 + taxa)^anos
}
int main(){
    double valorInicial;
    double taxaDeJuros;
    int periodoDeTempo;

    // Configurar a precisão da saída
    cout << fixed << setprecision(2); // Duas casas decimais

cout<< "Escreva o seu valor inicial em R$: ";
cin>> valorInicial;

cout << "Escreva a taxa de jutos em porcentagem (%): ";
cin >> taxaDeJuros;

cout<< "Escreva io periodo de tempo de sua preferencia em anos: ";
cin >> periodoDeTempo;
 

 // Calcular montantes
    double montanteSimples = calcularJurosSimples(valorInicial, taxaDeJuros, periodoDeTempo);
    double montanteComposto = calcularJurosCompostos(valorInicial, taxaDeJuros, periodoDeTempo);

    // Exibir resultados
    cout << "Montante final do investimento com juros simples: R$ " << montanteSimples << endl;
    cout << "Montante final do investimento com juros compostos: R$ " << montanteComposto << endl;

    return 0; // Indica que o programa terminou com sucesso
}




#include <iostream>
#include <iomanip>  // Usada para manipular a formatação de saída (como número de casas decimais)
using namespace std;

int main(){
    // Declaração das variáveis que vão armazenar o salário e a porcentagem de aumento
    double salarioAtual; // Para armazenar o salário atual do funcionário
    double porcentagemAumento; // Para armazenar a porcentagem de aumento
    double novoSalario; // Para armazenar o novo salário após o aumento


cout << "Qual e o seu salario atualmente? em R$: ";
cin >> salarioAtual;

cout << "Qual sera o aumento da porcentagem salarial?(%): ";
cin >> porcentagemAumento;


// Calcula o novo salário
novoSalario = salarioAtual + (salarioAtual * (porcentagemAumento / 100)); // Aumenta o salário

// Configura a saída para mostrar duas casas decimais
    cout << fixed << setprecision(2);

cout<< "Este é seu nvo salario pelas infomacoes passadas em reais: " << novoSalario<<endl;

return 0;



}
#include <iostream>
using namespace std;

int main() {

string nome, exercicio;
float duracao, peso, calorias;

cout << "Digite o nome da pessoa: ";
cin >> nome;

cout << "Digite o tipo de exercicio (Corrida, Natacao, Ciclismo): ";
cin >> exercicio;

cout << "Digite a duracao do exercicio (em minutos): ";
cin >> duracao;

cout << "Digite o peso da pessoa (em kg): ";
cin >> peso;

if (exercicio == "Corrida") {
    calorias = duracao * 0.1 * peso; //estava errado as medidas

} else if (exercicio == "Natacao") {
    calorias = duracao * 0.13 * peso;  //estava errado as medidas

} else if (exercicio == "Ciclismo") {
    calorias = duracao * 0.08 * peso; //estava errado as medidas

} else {
    cout << "Exercicio invalido!" << endl; 
    return 0;
}

cout << "A pessoa " << nome << " gastou aproximadamente " << calorias << " calorias." << endl;

return 0;
}
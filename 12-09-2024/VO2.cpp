#include <iostream> 
using namespace std;

int main() {

string nome;
int idade;
float tempo, vo2max;

cout << "Digite o nome do atleta: ";
cin >> nome;
cout << "Digite a idade do atleta: ";
cin >> idade;
cout << "Digite o tempo de corrida do atleta (em minutos): ";
cin >> tempo;

vo2max = 483 / tempo + 3.5; //Fórmula incorreta

cout << "O VO2 máximo do atleta " << nome << " e " << vo2max << " . " << endl;



return 0;
}
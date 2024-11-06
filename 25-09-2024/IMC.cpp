#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    double pesoQuilogramas;
    double altura;

    cout<< "Seu peso em quilogramas: ";
    cin>> pesoQuilogramas;

    cout<<"Sua altura em metros: ";
    cin>> altura;

    double IMC = pesoQuilogramas/(altura*altura);

    cout << fixed << setprecision(2); // Configura a saída para 2 casas decimais
    cout << "Este e o seu IMC: " << IMC << endl;

    return 0;
}
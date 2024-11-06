#include <iostream>
# include <string>

using namespace std;

void solicitarDimensoes(double &comprimento, double &largura, double &altura)
{
    cout << "Digite o comprimento do paralelepipedo em metros:";
    cin >> comprimento;

    cout << "Digite a largura do paralelepipedo em metros:";
    cin >> largura;

     cout << "Digite a altura do paralelepipedo em metros:";
    cin >> altura;

}

double calcularVolume(double comprimento, double largura, double altura)
{
    return comprimento*largura*altura;
}

int main()
{
    string nomeParalelepipedo;
    double comprimento, largura, altura;
    cout<< "Digite o tipo do papalelepépedo: ";
    getline(cin, nomeParalelepipedo);

    solicitarDimensoes(comprimento, largura, altura);

    double volume = calcularVolume(comprimento, largura, altura);

    cout<<"O volume aproximado do paralelepipedo "
    << nomeParalelepipedo << " é de " << volume << " metros cubicos."
    << endl;

    return 0;
}
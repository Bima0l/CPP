#include <iostream>
# include <string>

using namespace std;

int main(){
    string nomeDinossauro;
    int anoDescoberta, idadeDinossauro;

    cout << "Digite o nome do Dino:";
    getline(cin, nomeDinossauro);

    cout << "Digite o ano que descobriram o Dino:";
    cin >> anoDescoberta;

    idadeDinossauro = 2024 - anoDescoberta;

    cout << "O Dino " << nomeDinossauro << " tem " << idadeDinossauro << " anos. "<<endl;

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nomeDinossauro;
    int dataExtincao;

    // Solicita o nome do dinossauro
    cout << "Digite o nome do dinossauro: ";
    getline(cin, nomeDinossauro);

    // Solicita a data de extinção
    cout << "Digite a data de extinção (em milhões de anos atrás): ";
    cin >> dataExtincao;

    if (dataExtincao > 6 && dataExtincao <=145){
        cout<< "Mesozoica"<< endl;
    }
    else if(dataExtincao> 145 && dataExtincao<=251){
        cout << "Paleozoica"<< endl;
    }
    else if(dataExtincao<=66){
        cout<< "Cenozoica"<< endl;
    }
    else{
        cout<< "Pré-Combriana"<< endl;
    }




    return 0;
}

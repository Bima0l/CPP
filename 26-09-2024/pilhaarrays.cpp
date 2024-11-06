#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pilha;

    // Inserindo elementos na pilha
    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    pilha.push(40);

    cout << "Topo da pilha: " << pilha.top() << endl; // Espera-se que seja 40

    // Desempilhando dois elementos
    for (int i = 0; i < 2; i++) {
        if (!pilha.empty()) {
            cout << "Desempilhando: " << pilha.top() << endl;
            pilha.pop();
        } else {
            cout << "A pilha está vazia, não posso desempilhar." << endl;
        }
    }

    // Inserindo um novo elemento
    pilha.push(50);
    cout << "Inserindo 50, topo da pilha agora: " << pilha.top() << endl; // Espera-se que seja 50

    // Desempilhando mais um elemento
    if (!pilha.empty()) {
        cout << "Desempilhando: " << pilha.top() << endl;
        pilha.pop();
    } else {
        cout << "A pilha está vazia, não posso desempilhar." << endl;
    }

    return 0;
}

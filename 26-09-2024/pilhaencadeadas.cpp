#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> pilha;

    pilha.push('a');
    pilha.push('b');
    pilha.push('c');
    pilha.push('d');

    cout << "Topo da pilha: " << pilha.top() << endl;

    for (int i = 0; i < 2; i++) {
        if (!pilha.empty()) {
            cout << "Desempilhando: " << pilha.top() << endl;
            pilha.pop();
        } else {
            cout << "A pilha está vazia, não posso desempilhar." << endl;
        }
    }

    pilha.push('e');
    cout << "Inserindo 'e', topo da pilha agora: " << pilha.top() << endl;

    if (!pilha.empty()) {
        cout << "Desempilhando: " << pilha.top() << endl;
        pilha.pop();
    } else {
        cout << "A pilha está vazia, não posso desempilhar." << endl;
    }

    return 0;
}

#include <iostream>
#include <stack>
using namespace std;

int main(){

stack<int> pilha;

pilha.push(5);
pilha.push(10);
pilha.push(15);

cout<<"Topo da pilha: "<< pilha.top()<<endl;

while (!pilha.empty()){
    cout<< "Desempilhando: "<< pilha.top()<< endl;
    pilha.pop();
}
return 0;
}
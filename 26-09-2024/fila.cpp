#include <iostream>
#include <queue>
using namespace std;

int main(){

queue<int> fila;

fila.push(5);
fila.push(10);
fila.push(15);

cout<<"Primeiro da fila: "<< fila.front()<<endl;

while (!fila.empty()){
    cout<< "Removendo: "<< fila.front()<< endl;
    fila.pop();
}
return 0;
}
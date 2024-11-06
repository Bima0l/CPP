#include <iostream> 
#include <string>

using namespace std;

int main(){

string nomeDinossauro;
string especie;

cout << "Digite o nome do dinossauro:";
cin >> nomeDinossauro;


if (nomeDinossauro =="Tyrannosaurus Rex") {
especie = "Carnivoro"; 

}else if (nomeDinossauro == "Velociraptor") {
especie = "Carnivoro";

} else if (nomeDinossauro == "Triceratops") { 
    especie = "Herbivoro";

} else if (nomeDinossauro == "Brachiosaurus") { 
    especie = "Herbivoro";
} else {
especie = "Espécie não identificada";
}
cout << "A espécie do dino " << nomeDinossauro << " e: " << especie << endl;

return 0;

}
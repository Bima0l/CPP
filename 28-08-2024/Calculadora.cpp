//Bibliotecas
#include <iostream>
using namespace std;

int calcularFatorial(int numero) {
    // Começa a calcular os némeros aleatórios a partir do "1"(váriavel)
    int resultado = 1;
    
   
    
    
    
    
    for (int i = 1; i <= numero; ++i) {//Essa é a fórmula que faz esse cálculo do fatoeial
        //A palavra número é o parâmetro, utilizamos como um tipo de valor para calcular que neste caso e o fatorial
        //Utilizamos o for para fazemos o loop de multiplicação pela variável "resultado" por cada de "1" até o valor de "numero"
        resultado *= i;//Depois de completar o cálculo, retornamos o resultado. 
        //Já o resultado é um tipo de variável, que iremos começar no "1", por que no fatorial pode acontecer a multiplicação acumulativa(podemos trocar a ordem dos fatores, obtendo sempre o mesmo produto).
    }
    
    // Retorna o resultado do fatorial
    return resultado;
}


int calcularArranjoSimples(int n, int p) {// "calcularArranjoSimples" é uma função que adiciona as variáveis "n,p" (n=total de elementos/p=elementos a serem organizados)
    int fatorialN = calcularFatorial(n); // Calcula o fatorial de 'n' durante o processo
    //"calcularFatorial(n)" Calcula o fatorial de n e o armazena em fatorialN (escolhi esses nomes para mais fácil esse entendimento, neste caso fatorial com a junção de n mostrando que o n está armazenado no fatorial).
    int fatorialNMenosP = calcularFatorial(n - p); // Calcula o fatorial de 'n - p' por causa de sua fórmula matemática
    
    
    return fatorialN / fatorialNMenosP;// O arranjo simples usando a sua fórmula: A(n, p) = n! / (n - p)!
    // Retorna o número de "p" com os elementos escolhidos pelo usuário de um conjuntunto de "n"
}


int calcularCombinacaoSimples(int n, int p) {// Função para calcular a combinação simples, declara a sua função que calcula esse método, que a leta "p" mostra os elementos em conjunto e o "n" simplesmente os elementos.
    int fatorialN = calcularFatorial(n); // int fatorialN = calcularFatorial(n): Calcula o fatorial de n pareceido com o exemplo anterior
    int fatorialP = calcularFatorial(p); //int fatorialP = calcularFatorial(p);: Calculando o fatorial de p
    int fatorialNMenosP = calcularFatorial(n - p); //int fatorialNMenosP = calcularFatorial(n - p);: Calcula o fatorial de n menos(-) p, por causa de sua fómula
    
    
    return fatorialN / (fatorialP * fatorialNMenosP);// Calcula a combinação simples usando a fórmula: C(n, p) = n! / (p! * (n - p)!) e retorna o resultado
}


int main() {
    int n, p; // Valores de entrada/declara as variáveis
    
    // Mostra as opções para o usuário
    cout << "Escolha uma operação: " << endl;
    cout << "1. Calcular Fatorial" << endl;
    cout << "2. Calcular Arranjo Simples" << endl;
    cout << "3. Calcular Combinação Simples" << endl;
    
    int opcao;
    cin >> opcao; // Lê a opção escolhida
    
    // Executa a operação escolhida
    switch (opcao) {
        case 1:
            // Se a opção for 1, calcula o fatorial
            cout << "Digite um número inteiro: ";
            cin >> n; // Lê o número do usuário
            cout << "Fatorial de " << n << " é " << calcularFatorial(n) << endl; // Mostra o resultado
            break;
        
        case 2:
            // Se a opção for 2, calcula o arranjo simples
            cout << "Digite o número total de elementos (n): ";
            cin >> n; // Lê o total de elementos
            cout << "Digite o número de elementos escolhidos (p): ";
            cin >> p; // Lê o número de elementos escolhidos
            cout << "Arranjo Simples de " << n << " elementos escolhendo " << p << " é " << calcularArranjoSimples(n, p) << endl; // Mostra o resultado
            break;
        
        case 3:
            // Se a opção for 3, calcula a combinação simples
            cout << "Digite o número total de elementos (n): ";
            cin >> n; 
            cout << "Digite o número de elementos escolhidos (p): ";
            cin >> p; // o mesmo que o anterior
            cout << "Combinação Simples de " << n << " elementos escolhendo " << p << " é " << calcularCombinacaoSimples(n, p) << endl; // Mostra o resultado
            break;
        
        default:
            
            cout << "Opção inválida!" << endl;
            break;
    }
    
    return 0;
}

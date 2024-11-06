#include <iostream> // Inclui a biblioteca padrão de entrada e saída

// Função que realiza a ordenação do array usando o método Insertion Sort
void insertionSort(float arr[], int size) {
    // Loop começa do segundo elemento, pois o primeiro é considerado já ordenado
    for (int i = 1; i < size; ++i) {
        float key = arr[i]; // Usar float para as experiências
        int j = i - 1;

        // Move elementos do array que são maiores que a chave uma posição à frente
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Move o elemento para a direita
            j = j - 1; // Decrementa j para continuar a comparação
        }
        arr[j + 1] = key; // Insere a chave na posição correta
    }
}

int main() {
    // Inicializa um array com as experiências das tropas
    float arr[] = {24, 49, 73, 48, 59, 19, 62, 72, 43, 2, 
                   48, 85, 35, 49, 2, 7, 58, 74, 56, 6}; // Array de experiências conforme o exercício
    int size = sizeof(arr) / sizeof(arr[0]); // Calcula o tamanho do array

    // Exibe o array original
    std::cout << "Array original: ";
    for (int i = 0; i < size; ++i) { // Loop para percorrer o array
        std::cout << arr[i] << " "; // Imprime cada elemento
    }
    std::cout << std::endl; // Nova linha após imprimir o array

    insertionSort(arr, size); // Chama a função de ordenação

    // Exibe o array ordenado
    std::cout << "Array ordenado usando Insertion Sort: ";
    for (int i = 0; i < size; ++i) { // Loop para percorrer o array ordenado
        std::cout << arr[i] << " "; // Imprime cada elemento ordenado
    }
    std::cout << std::endl; // Nova linha após imprimir o array

    return 0; // Indica que o programa terminou com sucesso
}

// Selection Sort: Divide o array em duas partes (ordenada e não ordenada) e seleciona o menor elemento da parte não ordenada, trocando-o com o primeiro elemento não ordenado. Complexidade: O(n^2), não é estável.

// Insertion Sort: Constrói a lista ordenada um elemento de cada vez, inserindo cada novo elemento na posição correta. Complexidade: O(n^2) no pior caso, mas O(n) no melhor caso. É estável e eficiente para listas pequenas ou parcialmente ordenadas.

// Bubble Sort: Compara elementos adjacentes e troca-os se estiverem na ordem errada, repetindo o processo até que o array esteja ordenado. Complexidade: O(n^2) no pior caso, é simples, mas ineficiente para grandes conjuntos de dados. É estável.

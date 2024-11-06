#include <iostream> // Inclui a biblioteca padrão de entrada e saída

// Função que realiza a ordenação do array usando o método Insertion Sort
void insertionSort(float arr[], int size) {
    // Loop começa do segundo elemento, pois o primeiro é considerado já ordenado
    for (int i = 1; i < size; ++i) {
        float key = arr[i]; // Usar float para os pesos, trava a variável
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
    // Inicializa um array com os pesos
    float arr[] = {12.5, 45.7, 23.1, 8.9, 33.2, 6.4, 44.6, 22.0, 15.3, 
                   51.8, 16.7, 39.0, 47.2, 18.5, 12.3, 7.6, 3.2, 
                   9.8, 2.5, 40.9}; // float (ou double) é apropriado para armazenar números que têm partes fracionárias
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


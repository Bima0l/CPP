#include <iostream> // Inclui a biblioteca padrão de entrada e saída

// Função que realiza a ordenação do array usando o método Selection Sort
void selectionSort(int arr[], int size) {
    // Loop para percorrer cada elemento do array, exceto o último
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i; // Inicializa o índice do menor elemento

        // Loop interno para encontrar o menor elemento no subarray não ordenado
        for (int j = i + 1; j < size; ++j) {
            // Se o elemento atual é menor que o menor encontrado
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Atualiza o índice do menor elemento
            }
        }
        // Troca o menor elemento encontrado com o primeiro não ordenado
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    // Array com as quantidades de alimentos
    int arr[] = {82, 17, 62, 21, 17, 24, 79, 27, 9, 29, 
                  41, 19, 80, 61, 45, 16, 2, 38, 34, 29}; // Adicionei os novos dados
    int size = sizeof(arr) / sizeof(arr[0]); // Calcula o tamanho do array

    // Exibe o array original
    std::cout << "Array original: ";
    for (int i = 0; i < size; ++i) { // Loop para percorrer o array
        std::cout << arr[i] << " "; // Imprime cada elemento
    }
    std::cout << std::endl; // Nova linha após imprimir o array

    selectionSort(arr, size); // Chama a função de ordenação

    // Exibe o array ordenado
    std::cout << "Array ordenado usando Selection Sort: ";
    for (int i = 0; i < size; ++i) { // Loop para percorrer o array ordenado
        std::cout << arr[i] << " "; // operador de saída
    }
    std::cout << std::endl; // Nova linha após imprimir o array

    return 0; // Indica que o programa terminou com sucesso
}


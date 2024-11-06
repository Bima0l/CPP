#include <iostream> // Inclui a biblioteca padrão de entrada e saída

// Função que realiza a ordenação do array usando o método Bubble Sort
void bubbleSort(int arr[], int size) {
    // Loop externo para percorrer todo o array
    for (int i = 0; i < size - 1; ++i) {
        // Loop interno para comparar elementos adjacentes
        for (int j = 0; j < size - i - 1; ++j) {
            // Se o elemento atual é maior que o próximo
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem na ordem errada
                int temp = arr[j]; // Armazena o valor atual
                arr[j] = arr[j + 1]; // Atribui o próximo valor ao atual
                arr[j + 1] = temp; // Coloca o valor armazenado na posição correta
            }
        }
    }
}

// Função principal do programa
int main() {
    // Inicializa um array de alturas dos legionários
    int arr[] = {175, 165, 185, 190, 175, 160, 170, 180, 172, 178, 168, 176, 182, 174, 169, 185, 168, 172, 183, 177}; // Array de alturas , onde adicionei as informações de acordo com o que o exercício pede
    int size = sizeof(arr) / sizeof(arr[0]); // Calcula o tamanho do array

    // Exibe o array original
    std::cout << "Array original: ";
    for (int i = 0; i < size; ++i) { // Loop para percorrer o array
        std::cout << arr[i] << " "; // Imprime cada elemento
    }
    std::cout << std::endl; // Nova linha após imprimir o array

    // Chama a função de ordenação
    bubbleSort(arr, size);

    // Exibe o array ordenado
    std::cout << "Array ordenado usando Bubble Sort: ";
    for (int i = 0; i < size; ++i) { // Loop para percorrer o array ordenado
        std::cout << arr[i] << " "; // Imprime cada elemento ordenado
    }
    std::cout << std::endl; // Nova linha após imprimir o array

    return 0; // Indica que o programa terminou com sucesso
}

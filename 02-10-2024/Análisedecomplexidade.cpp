#include <iostream>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                int temp = arr[j];
                arr[j] = arr[j + 1]; // Aqui é a correção
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    std::cout << "Array ordenado usando Bubble Sort:";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " "; // Adicionei um espaço para melhor visualização
    }
    std::cout << std::endl;
    return 0;
}

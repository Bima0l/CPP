#include <iostream>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem na ordem errada
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {24, 18, 30, 21, 25, 22, 26, 28, 19, 27, 
                 23, 20, 29, 31, 24, 22, 25, 26, 20, 27, 
                 18, 21, 19, 25, 22, 24, 30, 28, 29, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array original: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int choice;
    std::cout << "Escolha o método de ordenação:\n1. Bubble Sort\n2. Selection Sort\n";
    std::cin >> choice;

    switch (choice) {
        case 1:
            bubbleSort(arr, size);
            std::cout << "Array ordenado usando Bubble Sort: ";
            break;
        case 2:
            selectionSort(arr, size);
            std::cout << "Array ordenado usando Selection Sort: ";
            break;
        default:
            std::cout << "Escolha inválida!" << std::endl;
            return 1;
    }

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

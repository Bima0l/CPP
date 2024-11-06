#include <iostream>
void countingSort (int arr [], int size){
    int maxVal = arr [0];
    for (int i = 1; i<size; ++i){
        if (arr[i] > maxVal){
            maxVal = arr[i];
        }
    }

    int count [maxVal + 1]={0};

    for(int i = 0; i < size; ++i){
        ++count[arr[i]];

    }

    int index = 0;
    for(int i = 0; i <= maxVal; ++i){
        while (count [i]> 0){
            arr [index++]=i;
            --count [i];
        }
    }
}

int main (){
    int arr[]= {5,2,9,1,5};
    int size = sizeof(arr)/ sizeof(arr[0]);

    countingSort(arr, size);

    std::cout<< "Array ordenado usando Counting Sort: ";
    for (int i=0; i< size; ++i){
        std::cout <<arr[i]<< " ";

    }
    std::cout<<std:: endl;
    return 0;
}
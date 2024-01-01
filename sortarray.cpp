#include <iostream>

void sort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() {

    int array[] = {5, 3, 2, 1, 4};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "Unsorted array: " << std::endl;

    for(int element : array) {
        std::cout << element << std::endl;
    }

    sort(array, size);

    std::cout << "Sorted array: " << std::endl;

    for(int element : array) {
        std::cout << element << std::endl;
    }

    return 0;
}

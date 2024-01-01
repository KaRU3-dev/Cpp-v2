#include <iostream>

int searchArray(int arr[], int size, int element) {

    for(int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }

    return -1;
}


int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search: ";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index != -1) {
        std::cout << "Element found at index: " << index << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}

#include <iostream>

int main() {

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr) {
        std::cout << "Address is not assigned!" << std::endl;
    } else {
        std::cout << "Pointer is not null" << std::endl;
        std::cout << "Address: " << pointer << std::endl;
        std::cout << "Value: " << *pointer << std::endl;
    }

    return 0;
}

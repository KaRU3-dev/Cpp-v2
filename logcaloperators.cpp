#include <iostream>

int main() {
    int temp;
    bool sunny = false;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // And
    if (temp > 0 && temp < 30) {
        std::cout << "The temperature is good." << std::endl;
    }
    else {
        std::cout << "The temperature is bad." << std::endl;
    }

    // Or
    if (temp <= 0 || temp >= 30) {
        std::cout << "The temperature is bad." << std::endl;
    }
    else {
        std::cout << "The temperature is good." << std::endl;
    }

    // Not
    if (!sunny) {
        std::cout << "It is not sunny." << std::endl;
    }
    else {
        std::cout << "It is sunny." << std::endl;
    }

    return 0;
}

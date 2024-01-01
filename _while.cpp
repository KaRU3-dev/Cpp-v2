#include <iostream>

int main() {
    std::string name;

    while (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    name.clear();

    do {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    } while (name.empty());

    std::cout << "Hello " << name << "!" << std::endl;
}

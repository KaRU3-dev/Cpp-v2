#include <iostream>

int main() {

    std::string cars[3] = { "Corvette", "Mustang", "Camry" };

    cars[0] = "Ferrari";

    std::cout << cars[0] << std::endl;

    for (int i = 0; i < sizeof(cars) / sizeof(std::string); i++) {
        std::cout << cars[i] << std::endl;
    }

    return 0;
}

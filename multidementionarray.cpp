#include <iostream>

int main() {

    std::string cars[][4] = {
        { "Ford", "Chevy", "Honda", "Toyota", },
        { "Fiesta", "Camaro", "Civic", "Corolla", },
        { "Focus", "Mustang", "Accord", "Camry", },
    };

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++) {
        std::cout << "Row " << i << ": ";
        for (int j = 0; j < columns; j++) {
            std::cout << cars[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

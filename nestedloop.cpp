#include <iostream>

int main() {

    int rows;
    int columns;
    int symbols;

    std::cout << "How many rows? ";
    std::cin >> rows;

    std::cout << "How many columns? ";
    std::cin >> columns;

    std::cout << "Enter a symbol: ";
    std::cin >> symbols;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            std::cout << symbols;
        }
        std::cout << std::endl;
    }

    return 0;
}

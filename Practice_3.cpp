#include <iostream>

int main() {
    double temp;
    char unit;

    std::cout << "***** Temperature Converter *****" << std::endl;

    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "The temperature in Fahrenheit is: " << temp << "F" << std::endl;
    }
    else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "The temperature in Celsius is: " << temp << "C" << std::endl;
    }
    else {
        std::cout << "Invalid unit." << std::endl;
    }

    std::cout << "*********************************" << std::endl;

    return 0;
}

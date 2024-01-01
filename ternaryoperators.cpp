#include <iostream>

int main() {
    // int grade = 50;

    // grade >= 60 ? std::cout << "Passed." << std::endl : std::cout << "Failed." << std::endl;

    // int number = 8;
    // number % 2 == 1 ? std::cout << "Odd." << std::endl : std::cout << "Even." << std::endl;

    bool hungry = true;
    hungry ? std::cout << "Hungry" << std::endl : std::cout << "Not hungry" << std::endl;
    std::cout << (hungry ? "Hungry" : "Not hungry") << std::endl;

    return 0;
}

#include <iostream>

int main() {

    const int SIZE = 5;

    std::string foods[SIZE];

    fill(foods, foods + SIZE, "Pizza");

    for (std::string food : foods) {
        std::cout << food << std::endl;
    }

    return 0;
}

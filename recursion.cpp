#include <iostream>

void walk(int steps);


int main() {

    walk(5);

    return 0;
}

// Recursive approach
void walk(int steps) {
    if (steps > 0) {
        std::cout << "You take a step!" << steps << std::endl;
        walk(steps - 1);
    }
}

// Iterative approach
// void walk(int steps) {
//     for (int i = 0; i < steps; i++) {
//         std::cout << "You take a step!" << i + 1 << std::endl;
//     }
// }

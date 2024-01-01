#include <iostream>

int main() {

    std::string students[] = { "John", "Jane", "Jack", "Jill" };

    for (std::string student : students) {
        std::cout << student << std::endl;
    }

    return 0;
}

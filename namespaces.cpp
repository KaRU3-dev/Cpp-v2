#include <iostream>

namespace first {
    int x = 1;
}

int main() {
    using namespace first;

    std::cout << "x = " << x << std::endl;

    return 0;
}

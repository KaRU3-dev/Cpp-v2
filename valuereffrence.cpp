#include <iostream>

void swap(std::string &x, std::string &y) {
    std::string temp = x;
    x = y;
    y = temp;
}
void swap(std::string x, std::string y, std::string hash) {
    std::string temp = x;
    x = y;
    y = temp;
}


int main() {
    std::string x = "Kool-Aid";
    std::string y = "Water";

    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;

    swap(x, y);

    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;

    return 0;
}

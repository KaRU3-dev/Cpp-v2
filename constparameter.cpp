#include <iostream>

void printInfo(const std::string &name, const int &age) {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}


int main() {
    std::string name = "Bro";
    int age = 20;

    printInfo(name, age);

    return 0;
}

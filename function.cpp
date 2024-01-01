#include <iostream>

void happyBirthday(std::string name) {
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "Happy Birthday dear " << name << std::endl;
    std::cout << "Happy Birthday to " << name << std::endl;
}

void happyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "Happy Birthday dear " << name << std::endl;
    std::cout << "Happy Birthday to " << name << std::endl;
    std::cout << "You are " << age << " years old!" << std::endl;
}

int main() {

    std::string name = "user";
    int age = 21;

    happyBirthday(name);
    happyBirthday(name, age);

    return 0;
}

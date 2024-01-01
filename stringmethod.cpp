#include <iostream>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 12) {
        std::cout << "Your name is can't be over 12 characters." << std::endl;
    }
    else {
        std::cout << "Welcome " << name << "!" << std::endl;
    }

    if (name.empty()) {
        std::cout << "You didn't enter a name." << std::endl;
    }
    else {
        std::cout << "Welcome " << name << "!" << std::endl;
    }

    name.append("@gmail.com");
    std::cout << "Your email is: " << name << std::endl;

    std::cout << name.at(0) << std::endl;

    name.insert(0, "@");
    std::cout << name << std::endl;

    std::cout << name.find('f') << std::endl;

    name.erase(0, 1);
    std::cout << name << std::endl;

    name.clear();
    std::cout << "Hello " << name << "!" << std::endl;

    return 0;
}

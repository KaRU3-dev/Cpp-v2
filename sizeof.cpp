#include <iostream>

int main() {

    std::string name = "John";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = { 'A', 'B', 'C', 'D', 'E', 'F' };

    std::cout << sizeof(name) << std::endl;
    std::cout << sizeof(gpa) << std::endl;
    std::cout << sizeof(grade) << std::endl;
    std::cout << sizeof(student) << std::endl;
    std::cout << sizeof(grades) << std::endl;

    std::cout << sizeof(grades) / sizeof(char) << " elements" << std::endl;

    return 0;
}

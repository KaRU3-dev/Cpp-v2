#include <iostream>

int main() {
    double x = (int) 3.14;
    int y = 100;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << (char) y << std::endl;


    int correct = 8;
    int questions = 10;
    double grade = (double) correct / questions * 100;

    std::cout << "grade = " << grade << std::endl;


    return 0;
}

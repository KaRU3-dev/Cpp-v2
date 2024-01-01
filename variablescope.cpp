#include <iostream>

int myNum = 5;


void printNum() {
    std::cout << ::myNum << std::endl;
}


int main() {

    std::cout << ::myNum << std::endl;

    printNum();

    return 0;
}

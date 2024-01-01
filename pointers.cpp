#include <iostream>

int main() {

    std::string name = "Bro";
    int age = 21;
    std::string foods[5] = {"Pizza", "Burgers", "Pasta", "Steak", "Chicken"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFoods = &foods[0];

    std::cout << "Name: " << *pName << std::endl;
    std::cout << "Age: " << *pAge << std::endl;
    std::cout << "Foods: " << *pFoods << std::endl;

    return 0;
}

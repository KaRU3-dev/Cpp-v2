#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

        Pizza(){}
        Pizza(std::string topping1) {
            this -> topping1 = topping1;
        }
        Pizza(std::string topping1, std::string topping2) {
            this -> topping1 = topping1;
            this -> topping2 = topping2;
        }
};


int main() {

    Pizza pizza1("Peperoni");
    Pizza pizza2("Mushrooms", "Peppers");


    std::cout << pizza1.topping1 << std::endl;
    std::cout << pizza2.topping1 << std::endl;
    std::cout << pizza2.topping2 << std::endl;

    return 0;
}

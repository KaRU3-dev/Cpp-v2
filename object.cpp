#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat() {
            std::cout << "This person is eating!" << std::endl;
        }
        void drink() {
            std::cout << "This person is drinking!" << std::endl;
        }
        void sleep() {
            std::cout << "This person is sleeping!" << std::endl;
        }
};


int main() {

    Human human1;

    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 21;

    std::cout << human1.name << std::endl;
    std::cout << human1.occupation << std::endl;
    std::cout << human1.age << std::endl;

    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}

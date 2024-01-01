#include <iostream>

enum Day {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
};


int main() {

    Day today = Sunday;

    switch (today) {
        case Sunday:
            std::cout << "It is Sunday" << std::endl;
            break;
        case Monday:
            std::cout << "It is Monday" << std::endl;
            break;
        case Tuesday:
            std::cout << "It is Tuesday" << std::endl;
            break;
        case Wednesday:
            std::cout << "It is Wednesday" << std::endl;
            break;
        case Thursday:
            std::cout << "It is Thursday" << std::endl;
            break;
        case Friday:
            std::cout << "It is Friday" << std::endl;
            break;
        case Saturday:
            std::cout << "It is Saturday" << std::endl;
            break;
    }

    return 0;
}

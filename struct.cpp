#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

void showDescription(student &st) {
    std::cout << &st << std::endl;

    std::cout << st.name << std::endl;
    std::cout << st.gpa << std::endl;
    std::cout << st.enrolled << std::endl;
}

int main() {

    student student1;
    student1.name = "SpongeBob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    std::cout << &student1 << std::endl;
    showDescription(student1);

    return 0;
}
